#include <iostream>
using namespace std;
int main()
{
    int testprime = 0, divby = 0, remainder = 0;
    bool isprime;
    cout << "Prime Number Finder" << endl;
    while(testprime < 2147483647)//The Maximum for int
    {
        isprime=true;
        testprime++;
        for(divby=2; divby < testprime; divby++)
        {
            remainder = testprime % divby; // store the remainder of the current number when divided by divby
            if (remainder == 0)//If the number is not prime
            {
                isprime = false;
        break;
            }
        }
        if (isprime)//If it passes the test, it is prime.
        {
            cout << " " << testprime; // tell us what the prime number is.
        }
    }
    return 0;
}

