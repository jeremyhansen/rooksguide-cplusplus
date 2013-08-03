#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double shots, goals, saves, save_perc;
    char cont;

    do {

        cout.unsetf(ios::fixed);
        cout.unsetf(ios::showpoint);

        cout << "Enter the number of shots on goal:\t";
        cin >> shots;
        cout << "Enter the number of goals scored:\t";
        cin >> goals;
        cout << endl;

        saves = shots - goals;

        save_perc = (saves / shots);

        cout << "If there were " << shots << " shots and " << goals << " goals\n";
        cout << "then the goalie's save percentage was ";

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);

        cout << save_perc << endl << endl;

        cout << "Run again? Y/N\t";
        cin >> cont;
        cont = toupper(cont);
        cout << endl;

    } while (cont == 'Y');

    return 0;
}
