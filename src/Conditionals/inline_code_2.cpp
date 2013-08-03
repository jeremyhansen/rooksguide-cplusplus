#include <iostream>

using namespace std;

int main()
{
    int choice;
    double a = 5.1, b = 4.2;

    cout << "<1> Addition" << endl;
    cout << "<2> Subtraction" << endl;
    cout << "<3> Compare" << endl;

    cout << "Type the number of your desired option:\t";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "The result of this addition is " << a + b << endl << endl;
        break;

    case 2:
        cout << "The result of this subtraction is " << a - b << endl << endl;
        break;

    case 3:
        if (a > b) {
            cout << "A is greater than B";
        }
        else if (a < b) {
            cout << "A is less than B";
        }
        else {   //a == b
            cout << "A equals B";
        }

        cout << endl << endl;
        break;

    default:
        cout << "Not an option";
        break;
    }

    return 0;
}
