//##ignore-start ******************************************************
#include <iostream>

using namespace std;

void test(void);

int main()
{
    test();
    return 0;
}

void test()
{
//##ignore-end *******************************************************
    int x;
    cin >> x;

    if (x < 5) {
        // Declares y, assigns user input to y, then sets x to x + y
        int y;
        cin >> y;
        x += y;
    }
    else if (x > 5) {
        // Declares z, assigns user input to z, then sets x to x - z
        int z;
        cin >> z;
        x -= z;
    }

    cout << x; // Outputs either: x - z; x - y; or 5
//##ignore-start ******************************************************
}
//##ignore-end ********************************************************
