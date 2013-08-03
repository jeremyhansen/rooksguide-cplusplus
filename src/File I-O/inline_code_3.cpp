#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    char letter = 'A';
    ofstream outFile;

    outFile.open("OutputTextFile.txt");

    outFile << letter; // Puts the letter 'A' into the file

    return 0;
}
