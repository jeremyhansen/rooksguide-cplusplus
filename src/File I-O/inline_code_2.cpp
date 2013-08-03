#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    int number = 5;
    ifstream inFile;

    inFile.open("TextFile.txt");

    inFile >> number; // The value 5 in number is overwritten by the
    // integer stored in the file

    return 0;
}
