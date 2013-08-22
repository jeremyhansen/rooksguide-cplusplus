#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double sq, num;

    cout  << "Please enter a number: ";
    cin >> num;

    sq = sqrt(num); // Calculate the square root

    cout << "The square root of " << num << " is: " << sq << endl;

    return 0;
}
