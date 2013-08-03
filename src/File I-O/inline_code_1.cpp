#include <iostream> //For cin and cout 
#include <fstream> // For file I/O such as ifstream and ofstream

using namespace std;

int main ()
{
    ifstream inFile; //Declares a variable of type ifstream called inFile
    ofstream outFile; //Declares a variable of type ofstream called outFile

    inFile.open("TextFile.txt"); //Opens text file for input
    outFile.open("OutputTextFile.txt");

    / Creates text file for output

    return 0;
}
