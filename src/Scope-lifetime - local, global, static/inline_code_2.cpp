#include <iostream>

using namespace std;

void my_games();

int main()
{
    my_games();
    cout << games; // ERROR! No such variable here!
    return 0;
}

void my_games()
{
    int games = 10;
    cout << games << endl;
}
