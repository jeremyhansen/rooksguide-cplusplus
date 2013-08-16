#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Please enter an integer value for x: ";
    cin >> x;

    if (cin.fail()) {
        cout << "Error: invalid data type!" << endl;
    }
}
