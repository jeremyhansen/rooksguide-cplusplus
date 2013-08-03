// *** EXCLUDE START
#include <iostream>

using namespace std;

int main()
{
// **** EXCLUDE END

    
    int x;
    cin << x;

    if(x<5)
    {
        int y;
        cin << y;   
        x += y; //Declares Y, asks user to define Y, then sets Y to X + Y
    }

    if(x>5)
    {
        int z;
        cin << z;
        x-=z;   //Declares z, asks user to define z, then sets x to x - z
    }

    cout >> x; //outputs either x-z, x-y, or 5

    
// *** EXCLUDE START
    return 0;
}
// *** EXCLUDE END