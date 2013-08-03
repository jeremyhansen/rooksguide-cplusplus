#include <cstdlib>
#include <iostream>

using namespace std;

int figure_out(int user_number);

int I_love_math(int user_number);

int numbers = 35;

int main()
{
    int user_number;

    cout << "Hello and welcome to my program." << endl;
    cout << "Two functions will do two different operations to whatever interger you enter." << endl;
    cout << "Please enter in a number." << endl;
    cin >> user_number;

    figure_out(user_number);
    I_love_math(user_number);

    system("PAUSE");
    return EXIT_SUCCESS;
}

int figure_out(int user_number)
{
    int new_number;
    new_number = (user_number - numbers);
    cout << "Your new interger using subtraction is: " << new_number << endl;
    return new_number;
}

int I_love_math(int user_number)
{
    int new_number;
    new_number = (user_number + numbers);
    cout << "Your new interger using addition is: " << new_number << endl;
    return new_number;
}
