#include <iostream>

using namespace std;

double profit (int cost, double price); // function declaration (prototype)

int main ()
{
    double a, b;
    int c;
    
    cout << "Enter the manufacturing cost of the item:";
    cin >> c;
    cout << "Enter the retail price of the item:";
    cin >> b;

    a = profit (c, b); // Call the function profit with cost = c and price = b
    cout << a << endl; // Print the value that function profit returned
    
    return 0;
}
