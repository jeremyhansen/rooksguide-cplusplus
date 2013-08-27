#include <cstdlib>
#include <iostream>

using namespace std;

int subtraction(int user_number);
int addition(int user_number);

int number = 35;

int main()
{
    int user_number, new_number;

    cout << "Hello and welcome to my program." << endl;
    cout << "Two functions will do two different operations on the integer " 
         << "you enter." << endl;
    cout << "Please enter a number: ";
    cin >> user_number;

    new_number = subtraction(user_number);
    cout << "Your new integer using subtraction is: " << new_number << endl;
    
    new_number = addition(user_number);
    cout << "Your new integer using addition is: " << new_number << endl;
    
    return EXIT_SUCCESS;
}

int subtraction(int user_number)
{
    int new_number;
    new_number = user_number - number;
    return new_number;
}

int addition(int user_number)
{
    int new_number;
    new_number = user_number + number;
    return new_number;
}
