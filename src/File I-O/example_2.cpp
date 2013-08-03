/*What this code does is take your input
ans writes it and adds a new line after that 
in the first text file on your computer*/ 

#include<iostream>
#include <fstream>

using namespace std;

int main()

{
    string input;
    ifstream example;
    example.open ("first.txt");
    example>>input>>endl;;
    example.close();
    
    return 0;
    
}
