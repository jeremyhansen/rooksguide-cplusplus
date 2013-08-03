#include<iostream>
void example();
int example2(int one);

using namespace std;

int main()

{
    int one;

cout<<"Input a number"<<endl;
cin>>one;
 
example();
example2(one);
    
    system("pause");
    return 0;
    
}
void example()
{
     cout<<endl<<"Welcome to Functions! This is a void function so it doesnt return anything"<<endl;
     
}

int example2(int one)
{
    cout<<endl<<"This is an integer function so it can return integers, for example"<<endl<<
    "The number you entered was "<<one<<endl;
    
 return one;   
}
