//This is a basic program that shows inputs, outputs, and an integer variable

#include <iostream> /*include directive; allows use of the iostream library,
which contains definitions for cout and cin, which handle input and output*/

using namespace std; //someone please explain this well because I can't

int main() //begins the main body of the program
{
    int a; //declares integer variable called a

    cout << "Input an integer:\n"; //prompts user for input and outputs an endline

    cin >> a; //takes user input and stores it in variable a

    cout << a; //outputs contents of a (which is user input) to screen

    return 0; //ends main body of the program
}
