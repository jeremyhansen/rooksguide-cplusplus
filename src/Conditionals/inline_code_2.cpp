#include <iostream>

using namespace std;

int main()
{
    int choice;
    double a = 5.1, b = 4.2;

    cout << "<1> Addition\n";
    cout << "<2> Subtraction\n";
    cout << "<3> Compare\n";

    cout << "Type the number of your desired option:\t";
    cin >> choice;

    switch(choice)
    {
        case 1:
    cout << "The result of this addition is " << a + b << endl << endl;
    break;

        case 2:
    cout << "The result of this subtraction is " << a - b << endl << endl;
    break;

        case 3:
            if (a > b)
        cout << "A is greater than B";
            else if (a < b)
        cout << "A is less than B";
    else //a == b
        cout << "A equals B";
    break;

        default:
            cout << "Not an option";
        break;
    }

    return 0;
}
