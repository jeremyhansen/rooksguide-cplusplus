#include <iostream>
using namespace std;
int main()
{
    cout << "Norwich" << endl;
    cout.width(15);
    cout << "University" << endl;
    cout.fill('*');
    cout.width(20);
    cout << left << "Corps of Cadets" << endl;
}
