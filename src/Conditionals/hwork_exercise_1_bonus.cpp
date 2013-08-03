#include <iostream>

using namespace std;

int main()
{
    int input1, input2;

    cout << "Enter a number: ";
    cin >> input1;
    cout << "Enter a number to compare with the first: ";
    cin >> input2;

    if (input1 > input2) {
        cout << input1 << " is greater than " << input2;
    }
    else if (input1 == input2) {
        cout << input1 << " is equal to " << input2;
    }
    else {
        cout << input2 << " is greater than " << input1;
    }

    cout << endl;

    return 0;
}
