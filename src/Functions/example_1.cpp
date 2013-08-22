#include <iostream>

void example();
int example2(int one);

using namespace std;

int main()
{
    int one;

    cout << "Enter a number and press [ENTER]" << endl;
    cin >> one;

    example();
    example2(one);

    return 0;
}

void example()
{
    cout << endl << "Welcome to Functions! This is a void function so "
         << "it doesn't return anything." << endl;

}

int example2(int one)
{
    cout << endl << "This is an integer function so it can return integers."
         << "For example, the number you entered was " << one << endl;

    return one;
}
