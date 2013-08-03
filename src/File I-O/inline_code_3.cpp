#include <iostream>
#include <fstream>

using namespace std;
int main ()
{

    char Letter = 'A';
    ofstream outFile;

    outFile.open("OutputTextFile.txt");

    outFile << Letter; // Puts the letter 'A' into the file

    return 0;
}
