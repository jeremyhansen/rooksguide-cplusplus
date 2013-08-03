/* Creates a file called file.txt in the current directory and writes
 * Hello Word into it.
 */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream example;
    
    // Open the file. Note: If "file.txt" already exists it's contents is deleted
    example.open("file.txt");
    example << "Hello World" << endl;
    example.close();

    return 0;
}

//##ignore-start
//TODO: Should error checking be added to this example?
//##ignore-end