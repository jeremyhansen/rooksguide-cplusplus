# include<iostream>
using namespace std;

struct {
    int example;
    double test;
} testing;
main()
{
    cout << "Input an integer ";
    cin >> testing.example;

    cout << endl << "Input a number with a decimal";
    cin >> testing.test;

    system("pause");
    return 0;
}
