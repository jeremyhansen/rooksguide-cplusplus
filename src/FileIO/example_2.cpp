/* Get the user to input a string and then write the string into a file
 * called "file.txt" in the current directory.
 */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string input;
    ofstream example;

    cout << "Enter a string and press [ENTER]: ";
    getline(cin, input);
    
    example.open("file.txt");
    example << input << endl;
    example.close();
    
    cout << "Saved string into file.txt" << endl;

    return 0;
}
