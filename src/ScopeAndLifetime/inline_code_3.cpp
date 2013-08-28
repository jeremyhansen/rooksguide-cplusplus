#include <iostream>

using namespace std;

void my_games();
void their_games();

int games = 5;  // Global variable
    
int main()
{
    my_games();
    their_games();

    return 0;
}

void my_games()
{
    cout << games << endl;
}

void their_games()
{
    cout << games << endl;
}
