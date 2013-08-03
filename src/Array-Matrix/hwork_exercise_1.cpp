#include <iostream>

using namespace std;

int main()
{
    int myArray[10];
    cout << "Enter 10 integers, press [ENTER] after every integer.\n";

    for (int i = 0; i < 10; i++) {
        cin >> myArray[i];
    }

    for (int j = 0; j < 10; j++) {
        cout << myArray[j] << endl;
    }

    return 0;
}
