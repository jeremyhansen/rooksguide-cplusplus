#include <iostream>

using namespace std;

class Weaver {
public:
    double test(double number);
private:
    double example;
};

int main()
{
    Weaver R;
    cout << R.test(1.34) << endl;
    return 0;
}

double Weaver::test(double number)
{
    example = number;
    return example;
}
