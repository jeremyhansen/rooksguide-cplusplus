#include <iostream>
using namespace std;
int main()
{

    int x = 0;
    int y = 0;

    cout << "please enter a value for x: " << endl;
    cin >> x;

    if (cin.fail()) {
        cout << “That is not a valid data type!”;
    }
}
