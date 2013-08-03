#include <iostream>

using namespace std;

int main()
{
    int input1, input2;
    cout << "enter a number: ";
    cin >> input1;
    cout << "enter a number to compare to the first: ";
    cin >> input2;

    if (input1 > input2) {
        cout << input1 << " is greater than " << input2;
    } else {
        cout << input2 << " is greater than " << input1;
    }
}
