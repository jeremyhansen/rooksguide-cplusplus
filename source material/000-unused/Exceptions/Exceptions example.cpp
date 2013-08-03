#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int days;
    bool loop = true;
    
    do 
    {
     cout << "Please input how many days are in a year: " << endl; 
     cin >> days;
       try
       {
          if(days != 365)  //Check to see if the input is 365 if it's not it throws
          {
          throw days;               
          }
          else
          {
              loop = false; //Allows the loop to exit if the input is 365
          }
       }
       catch(...)       //Catches the throw
       {
          cout << "Your answer is wrong." << endl; //Outputs that the input is wrong
       }
    }while(loop == true);

system("PAUSE");
return 0;
}




