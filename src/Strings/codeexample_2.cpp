/* This code concantenates (joins) a first, middle name and last name. 
 * The concatenated string is then output.
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstname = "Phung", middlename = "P.", lastname = "Pham";
    string fullname;
    string space = " ";

    fullname = firstname + space + middlename + space + lastname;
    cout << fullname << endl;

    return 0;
}
