#include<iostream>//Input and output library
using namespace std;// Using standard syntax

double divide (double x, double y); //Function divide declaration.

int main ()
{
    double x,y;
    
    cout<<"Please enter the dividend: ";// Takes user input for x and y
    cin>>x;
    cout<<endl;
    cout<<"Please enter the divisor: ";
    cin>>y;
    
try// trys function
{
  cout<<"The quotient is: "<< divide(x,y);//calls function
}
catch (double e)  // if the function throws an exception, this will catch it and send an error message.
{
      cout<<"You cannot divide by zero."; // error message
}
cout<<endl;
system ("pause");
return 0;

}

double divide (double x,double y)//function declaration
{
    double temp;
    
    if (y == 0) // if y = 0, then they are trying to divide by 0.
    {
          throw x;//so, we throw the exception.
}
else// if not, lets return the quotient.
temp = x/y;
return temp;

}


