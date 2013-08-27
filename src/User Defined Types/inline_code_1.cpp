#include <iostream>

using namespace std;

struct Testing {
    int i;
    double d;
};

int main()
{
    Testing testing;
    
    cout << "Input an integer: ";
    cin >> testing.i;

    cout << endl << "Input a number with a decimal: ";
    cin >> testing.d;
    
    return 0;
}
