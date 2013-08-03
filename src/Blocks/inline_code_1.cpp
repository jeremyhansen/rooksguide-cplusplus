// *** EXCLUDE START
#include <iostream>

using namespace std;

void test(void);

int main()
{
    test();
    return 0;
}
// **** EXCLUDE END

void test()
{
    int x;
    cin >> x;

    if (x < 5) {
        // Declares Y, gets user input to define Y, then sets X to X + Y
        int y;
        cin >> y;
        x += y;
    } else if (x > 5) {
        // Declares Z, gets user input to define Y, then sets X to X - Z
        int z;
        cin >> z;
        x -= z;
    }

    cout << x; // Outputs either x-z, x-y, or 5
}
