// Program that searches for the letter a in the input.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    cout << "Enter a word or sentence followed by [ENTER]: ";
    getline(cin, input);
    
    for (unsigned i = 0; i < input.length(); i++) {
        if (input[i] == 'a') {
            cout << "There is a letter a" << endl;
        }
    }

    return 0;
}
