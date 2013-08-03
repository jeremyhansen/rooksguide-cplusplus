//This program compiles, but does not get the result the programmer wanted.

//Allyson LeFebvre
//Save Percentages with integers

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int shots, goals, saves; //declares vairables of type int for whole numbers
    //These variables being declared as integers is a piece of the problem
    double save_perc; //declares variable of type double to store final answer
    char cont; //used in do-while loop

    do { //start of do-while loop

    cout.unsetf(ios::fixed);
    cout.unsetf(ios::showpoint);

    cout << "Enter the number of shots on goal:\t"; //prompts user
    cin >> shots; //user input
    cout << "Enter the number of goals scored:\t"; //prompts user
    cin >> goals; //user input
    cout << endl; //outputs endline for readability

    saves = shots - goals; //need saves for calculation

    save_perc = (saves / shots); //no *100; hockey shows save perc as decimal to three places
    //The real issue is here, where the program divides two integers but the result is a float or double
    cout << "If there were " << shots << " shots and " << goals << " goals\n"; //output used to confirm input was correct
    cout << "then the goalie's save percentage was "; //output

    //putting this block here allows shots and goals to be output without decimal points
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    //however because save_perc is output after this code is executed, it is displayed with decimals

    cout << save_perc << endl << endl;

    cout << "Run again? Y/N\t"; //prompts user
    cin >> cont; //user input
    cont = toupper(cont); //input converted to uppercase
    cout << endl; //outputs endline for readability

    }while (cont == 'Y'); //start loop again at 'do' if variable cont is equal to Y

    system("PAUSE"); //makes program pause and wait for user to acknowledge that it has done what they want
    return 0; //ends program
}

//Fix 1:
//By replacing the integers above with doubles of the same name, the problem is solved and //the division occurs as it is intended to
//    double shots, goals, saves, save_perc; //declares variables of type double to be used in division and to store final answer

//I know there are other ways to do it, is anyone good at them? Because I’m not.
