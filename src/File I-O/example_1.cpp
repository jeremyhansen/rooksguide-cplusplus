/* What this code does is write hello world in the first.txt document on your computer*/

#include<iostream>
#include <fstream>

using namespace std;

int main()

{
    ofstream example;
    example.open ("first.txt");
    example << "Hello World";
    example.close();

    return 0;

}

