#include <iostream>

using namespace std;

int main()
{
    int testprime = 0, divby, remainder;
    bool isprime;

    cout << "Prime Number Finder (Searching for primes > 0 and < 50000)" << endl;

    while (testprime < 50000) {
        testprime++;                        // Advance to next number to check for primeness

        isprime = true;

        for (divby = 2; divby < testprime; divby++) {
            remainder = testprime % divby;  // Store the remainder of testprime when divided by divby

            if (remainder == 0) {           // If the number was evenly divisible by another number...
                isprime = false;            // ... then it is not a prime number.
                break;
            }
        }

        if (isprime) {                      // If the number is prime based on the test above
            cout << " " << testprime;       // Print the prime number
        }
    }

    cout << endl;   // advance output to a new line
    return 0;
}
