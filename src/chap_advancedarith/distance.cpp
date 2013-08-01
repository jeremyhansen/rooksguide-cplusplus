#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, y1, y2;
    float dist;
    x1 = 4;
    y1 = 4;
    x2 = 6;
    y2 = 10;
    
    dist = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    cout << dist;

    return 0;
}
