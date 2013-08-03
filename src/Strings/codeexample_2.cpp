/*This code takes in your first and last name, and then outputs it*/   

#include<iostream>
#include<string>
using namespace std;
int main()
{
string fname = "Phung", mname= "P.", sname= "Pham", Fname;
string space = " ";
Fname = sname+space+mname+space+fname;
cout<<Fname<<endl;
return 0;
}