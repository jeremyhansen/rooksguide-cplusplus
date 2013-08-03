#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <dirent.h> // Note: this is not standard on Windows, but it's available

// Change to match OS
#define DIR_SEPARATOR_STR "/"

int recurse_dirs(const char *srcdir);
bool isCppSrcFile(const char *filename);
int findFileExtensionPos(const char* filename, const char* extension);
bool convertToTeX(const char* dir, const char* filename);
bool convertToTeX_file(const char* srcfilename, const char* destfilename);
bool convertToTeX_parse(FILE* infile, FILE* outfile);
char *buildFilePath(const char* dir, const char* entryname, const char* addExt);

/* These are "directives" (used in a src file) to indicate that a block should be
 * ignored in the TeX output/conversion. An example are code fragments that are meant
 * to be inline in the final document but for testing (and/or compiling) the code extra
 * code was added (e.g. a main() function, include files etc
 */
const char *ignoreStartStr = "//##ignore-start";
const char *ignoreEndStr = "//##ignore-end";
    
int main(void)
{
    int filesProcessed;
    
    filesProcessed = recurse_dirs(".");
    printf("%d files processed\n", filesProcessed);
    
    return 0;
}

int recurse_dirs(const char *srcdir)
{
    DIR *dir;
    struct dirent *ent;
    int filesProcessed = 0;
    
    if ((dir = opendir (srcdir)) != NULL) {
        while ((ent = readdir (dir)) != NULL) {
            if (ent->d_type == DT_DIR) {
                if (strcmp (".", ent->d_name) != 0 && strcmp ("..", ent->d_name) != 0) {
                    char *newparent = buildFilePath(srcdir, ent->d_name, NULL);
                    if (newparent) {
                        filesProcessed += recurse_dirs(newparent);
                        free(newparent);
                    } else {
                        printf("Could not allocate memory for path name\n");
                    }
                }
            } else if (ent->d_type == DT_REG) {
                if (isCppSrcFile(ent->d_name)) {
                    //printf ("%s/%s\n", srcdir, ent->d_name);
                    if (convertToTeX(srcdir, ent->d_name)) {
                        filesProcessed++;
                    }
                }
            }
        }
        closedir (dir);
    } else {
        printf("Error: could not open dir %s\n", srcdir);
    }
    return filesProcessed;
}

// pre: filename != NULL
bool isCppSrcFile(const char *filename)
{
    if (*filename == '.') return false;     // Ignore unix "hidden files"
                                            // This will stop a file called (e.g.) ".cpp" 
                                            // triggering a false positive

    if (findFileExtensionPos(filename, ".cpp") != -1) {
        return true;
    }
    if (findFileExtensionPos(filename, ".h") != -1) {
        return true;
    }
    
    return false;
}

int findFileExtensionPos(const char* filename, const char* extension)
{
    const char *pos = filename;
     
    while ((pos = strstr(pos, extension)) != NULL) {
        size_t len = strlen(extension);
        if (pos && *(pos + strlen(extension)) == '\0') {
            return pos - filename;
        }
        pos += len;
    }
    
    return -1;  // not found
}

bool convertToTeX(const char* dir, const char* filename)
{
    bool success;
    char* srcfilename = buildFilePath(dir, filename, NULL);
    char* destfilename = buildFilePath(dir, filename, ".TeXFrag");
    
    if (srcfilename && destfilename) {
        printf("%s --> %s ", srcfilename, destfilename);
        success = convertToTeX_file(srcfilename, destfilename);
    } else {
        success = false;
    }
    
    puts(success ? "[OK]" : "[ERROR]");
    
    if (srcfilename) free(srcfilename);
    if (destfilename) free(destfilename);
    
    return success;
}

bool convertToTeX_file(const char* srcfilename, const char* destfilename)
{
    FILE *infile, *outfile;
    bool success;
    
    if (strcmp(srcfilename, destfilename) == 0) {
        printf("[ERROR Src and Dest ==]");
        return false;
    }
    
    infile = fopen(srcfilename, "r");
    outfile = fopen(destfilename, "w");
    
    if (infile && outfile) {
        success = convertToTeX_parse(infile, outfile);
    } else {
        printf("[FILE OPEN ERROR]");
        success = false;
    }
    
    if (infile) fclose(infile);
    if (outfile) fclose(outfile);
    
    return success;
}

bool convertToTeX_parse(FILE* infile, FILE* outfile)
{
    char buffer[512];
    int inIgnore = 0;

    fprintf(outfile, "\\begin{lstlisting}\n");
    
    while (fgets(buffer, sizeof buffer, infile)) {
        const char *pos = buffer;
        size_t len = strlen(buffer);
        bool ignoreLine = false;
        
        if (len == 0) continue;
        if (*(buffer +  len - 1) != '\n' && !feof(infile)) {
            printf("[Src line exceeded %d chars. Aborting]", sizeof buffer);
            return false;
        }
                
        while (isspace(*pos)) pos++;    // skip leading whitespace
        
        if (strncmp(ignoreStartStr, pos, strlen(ignoreStartStr)) == 0) {
            inIgnore++;
        } else if (strncmp(ignoreEndStr, pos, strlen(ignoreEndStr)) == 0) {
            inIgnore--;
            ignoreLine = true;
        }
        
        if (inIgnore < 0) {
            printf("[Too many %s directives. Aborting]", ignoreEndStr);
            return false;
        }
        
        if (inIgnore == 0 && !ignoreLine) {
            fprintf(outfile, buffer);
        }
    }
    
    if (inIgnore != 0) {
        printf("[Unclosed %s directive]", ignoreStartStr);
        return false;
    }
    
    fprintf(outfile, "\\end{lstlisting}\n");
    
    return true;
}

// dir may be NULL, but not entryname
// if addExt is !NULL then it is added to the end of the built pathandfile
char *buildFilePath(const char* dir, const char* entryname, const char* addExt)
{
    size_t requiredMem;
    char *newString;
    bool isBaseDir = strcmp(dir, ".") == 0;
        
    requiredMem = isBaseDir ? 0 : strlen(dir);
    requiredMem += isBaseDir ? 1 : 2;  // need to add dir separator and nul terminator
    requiredMem += strlen(entryname);
    
    if (addExt) {
        requiredMem += strlen(addExt);
    }
    
    if (requiredMem == 2) return NULL;  // Two empty strings were supplied
    
    if ((newString = malloc(requiredMem))) {
        if (!isBaseDir) {
            strcpy(newString, dir);
            strcat(newString, DIR_SEPARATOR_STR);
        } else {
            *newString = '\0';
        }
        strcat(newString, entryname);
        if (addExt) {
            strcat(newString, addExt);
        }
    }
    return newString;
}
