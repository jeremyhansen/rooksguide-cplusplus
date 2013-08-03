//Allyson LeFebvre
//Please don’t steal it, peoples. I worked hard on it.
//September 16, 2012
//Calculator

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

void displayMenu();
void add();
void subtract();
void multipy();
void division();
void square();
void squareRoot();
void power();

void displayTrianglesMenu();
void triArea();
void triPerim();
void right();

void displayCirclesMenu();
void areaCirc();
void circumCirc();

//global variables used by program, regardless of which function
const double pi = 3.14159265359; //sets the value of pi used by the caluculator
char b = 'Y'; //used in do-while loops throughout program

int main()
{
    char a = 'M'; //declares and initalizes character variable a to 'M' for use in menu's loop

    int deci; //integer variable used to decide how many numbers will appear after the decimal point for answers

    cout << "How many decimal places would you like to show in your answers? (Up to 10)\n"; //prompts the user
    cin >> deci; //takes input from the user

    if (deci > 10) //checks if the input is larger than 10
        deci = 10; //if input is larger than 10, it is set to 10

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(deci);

    do { //starts a do-while loop

        system ("CLS"); //clears the screen

        int choice; //integer variable that allows users to pick from a menu shown on screen

        displayMenu(); //calls and runs the function titled displayMenu()

        cout << "What would you like to do?\t"; //prompts the user
        cin >> choice; //takes input from the user
        cout << endl; //outputs an endline for readability

        switch (choice) { //variable 'choice' is used by switch statement; case is picked based on the user input stored in choice
            //start case list
        case 1: //if user inputs 1 this case is executed
            add(); //call to function 'addition'
            break; //break statement; end of switch statement

        case 2: //if user inputs 2 this case is executed
            subtract(); //call to function 'subtraction'
            break; //break statement

        case 3: //if user inputs 3 this case is executed
            multipy(); //call to function 'multiplication'
            break; //break

        case 4: //if user inputs 4
            division(); //call to function 'division'
            break; //break

        case 5: //if user inputs 5
            square(); //call to function 'square'
            break; //break

        case 6: //if user inputs 6
            squareRoot(); //call to function 'squareroot'
            break; //break

        case 7: //is user inputs 7
            power(); //call to function 'power'
            break; //break

        case 8: //if user inputs 8
            system ("CLS"); //clear screen
            displayTrianglesMenu(); //call to function displayTrianglesMenu()
            cout << "What would you like to do?\t"; //prompts user for input
            cin >> choice; //takes input from user
            cout << endl; //outputs endline for readability

            switch (choice) { //new switch statement using new user input; switch statement within switch statement
                //start case list
            case 1: //if new user input is 1
                triArea(); //call to function triArea
                break; //break

            case 2: //new user input = 2
                triPerim(); //call to function triPerim
                break; //break

            case 3: //new user input = 3
                right(); //call to function right
                break; //break

            default: //if user input is not found as a case statement above
                cout << "That is not a valid option.\n\n"; //outputs text in "" to screen
                break; //break
            } //end case list

            break; //break statement after case 8 in main menu

        case 9: //if user inputs 9
            system ("CLS"); //clear screen
            displayCirclesMenu(); //function call to displayCirclesMenu()
            cout << "What would you like to do?\t"; //prompts user for input
            cin >> choice; //takes new user input
            cout << endl; //outputs endline for readability

            switch (choice) {
                //start case list
            case 1: //if new user input is 1
                areaCirc(); //call to areaCirc
                break; //break statement

            case 2: //if new user input is 2
                circumCirc(); //call to circumCirc
                break; //break statement

            default: //if user input is not found as a case statement above
                cout << "That is not a valid option.\n\n"; //outputs text in "" to screen
                break; //break statement
            } //end case list

            break; //break statement after case 9 in main menu

        case 99: //if user input is 99
            return 0; //end program
            break; //break statement

        default: //if user input is not found as case statement above
            cout << "That is not a valid option.\n\n"; //outputs text in "" to screen
            break; //break
        } //end case list

        cout << "Press M to return to the main menu. Press any key to quit.\n"; //prompts user
        cin >> a; //gets input from user
        a = toupper (a); //converts input to uppercase
        cout << endl; //outputs endline for readability

        if (a != 'M') //if input is not M
            cout << "Goodbye!\n\n"; //outputs text in "" to screen
    }
    while (a == 'M');   //starts loop over again if input is M

    system("PAUSE"); //pauses program until user hits a key
    return 0; //ends program
} //end of int main


void displayMenu() //function header; void, so function has no return type
{
    //outputs the following lines to the screen
    //used strictly as prompts for user
    cout << "\t\tCalculator Main Menu\n\n";
    cout << "<1>\tAddition\n";
    cout << "<2>\tSubtration\n";
    cout << "<3>\tMultiplication\n";
    cout << "<4>\tDivision\n";
    cout << "<5>\tSquare\n";
    cout << "<6>\tSquare Root\n";
    cout << "<7>\tRaise to nth power\n";
    cout << "<8>\tTriangles\n";
    cout << "<9>\tCircles\n";
    cout << "<99>\tQuit\n";
    cout << "******************************************\n\n";
}

void add() //function header
{
    do { //start of do while loop
        system("CLS"); //clears screen

        double n1, n2 = 0;

        cout << "Enter numbers to add. Enter 0 to get total.\n";

        do {
            cin >> n1;

            if (n1 != 0)
                n2 = n2 + n1;
        }
        while (n1 != 0);

        cout << "The answer is " << n2 << endl << endl;

        cout << "Add again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void subtract()
{
    do {
        system("CLS");

        double n1, n2 = 0;

        cout << "Enter the numbers to subtract. Enter 0 to get total.\n";
        cout << "(Note: The second number is subtracted from the first,\nthe third is subtracted from that result, etc)\n";

        cin >> n2;

        do {
            cin >> n1;

            if (n1 != 0)
                n2 = n2 - n1;
        }
        while (n1 != 0);

        cout << "The answer is " << n2 << endl << endl;

        cout << "Subtract again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void multipy()
{
    do {
        system("CLS");

        double n1 = 0, n2 = 1;

        cout << "Input the numbers you would like to multiply. Enter 1 to get total.\n";

        do {
            cin >> n1;

            if (n1 != 1)
                n2 = n2 * n1;
        }
        while (n1 != 1);

        cout << "The answer is " << n2 << endl << endl;

        cout << "Multiply again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void division()
{
    do {
        system("CLS");

        double n1, n2 = 0;

        cout << "Enter the numbers to divide. Enter 1 to get total.\n";
        cout << "(Note: The first number is divided by the second,\nthat result is divided by the third, etc)\n";

        cin >> n2;

        do {
            cin >> n1;

            if (n1 != 1)
                n2 = n2 / n1;
        }
        while (n1 != 1);

        cout << "The answer is " << n2 << endl << endl;

        cout << "Divide again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void square()
{
    do {
        system("CLS");

        double n1 = 0;
        cout << "Input the number to square:\t";
        cin >> n1;
        cout << "The answer is " << n1*n1 << endl << endl;

        cout << "Square again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void squareRoot()
{
    do {
        system("CLS");

        double n1 = 0;

        cout << "Input the number you'd like the square root of:\t";
        cin >> n1;

        cout << "The answer is " << sqrt (n1) << endl << endl;

        cout << "Find square root again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void power()
{
    do {
        system("CLS");

        double n1, n2 = 0;
        cout << "Input the base number. ";
        cin >> n1;

        cout << "Input the exponent. ";
        cin >> n2;

        cout << "The answer is " << pow (n1, n2) << endl << endl;

        cout << "Raise to power again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void displayTrianglesMenu()
{
    cout << "\t\tTriangles\n\n";
    cout << "<1>\tFind area of triangle\n";
    cout << "<2>\tFind perimeter of triangle\n";
    cout << "<3>\tRight triangle check\n\n";
    cout << "******************************************\n\n";
}

void triArea()
{
    do {
        system("CLS");

        double n1, n2 = 0;

        cout << "Enter the length of the base of the triangle: ";
        cin >> n1;

        cout << "Enter the height of the triangle: ";
        cin >> n2;

        cout << endl << "The area of the triangle is " << (n1 * n2) / 2 << endl << endl;

        cout << "Find area of triangle again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void triPerim()
{
    do {
        system("CLS");

        double n1, n2, n3;

        cout << "Enter the length of side one: ";
        cin >> n1;

        cout << "Enter the length of side two: ";
        cin >> n2;

        cout << "Enter the length of side three: ";
        cin >> n3;

        cout << endl << "The perimeter of the triangle is " << n1 + n2 + n3 << endl << endl;

        cout << "Find perimeter again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void right()
{
    do {
        system("CLS");

        double n1, n2, n3 = 0;

        cout << "Enter the lengths of the sides: ";
        cin >> n1;
        cin >> n2;
        cin >> n3;

        if (n1 > n2 && n1 > n3) {
            if (n1 * n1 == n2 * n2 + n3 * n3)
                cout << "This is a RIGHT TRIANGLE.\n\n";
            else // n1 squared does not equal n2 squared plus n3 squared
                cout << "This is NOT a right triangle.\n\n";
        }
        else if (n2 > n1 && n2 > n3) {
            if (n2 * n2 == n1 * n1 + n3 * n3)
                cout << "This is a RIGHT TRIANGLE.\n\n";
            else // n2 squared does not equal n1 squared plus n3 squared
                cout << "This is NOT a right triangle.\n\n";
        }
        else { // n3 > n1 & n1
            if (n3 * n3 == n1 * n1 + n2 * n2)
                cout << "This is a RIGHT TRIANGLE.\n\n";
            else // n3 squared does not equal n1 squared plus n2 squared
                cout << "This is NOT a right triangle.\n\n";
        }

        cout << "Perform check again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void displayCircles()
{
    cout << "\t\tCircles\n\n";
    cout << "<1>\tArea of circle\n";
    cout << "<2>\tCircumference of circle\n";
    cout << "******************************************\n\n";
}

void areaCirc()
{
    do {
        system("CLS");

        char op;
        double n1, n2 = 0;

        cout << "Would you like to calculate using <r> radius or <d> diameter?\t";
        cin >> op;
        op = tolower(op);

        if (op == 'r') {
            cout << "Enter the radius:\t";
            cin >> n1;

            n2 = pi * (n1 * n1);
        }
        else if (op == 'd') {
            cout << "Enter the diameter:\t";
            cin >> n1;

            n1 = n1 / 2;

            n2 = pi * (n1 * n1);
        }
        else
            cout << "Invalid option.\n";

        cout << endl << "The area of the circle is " << n2 << endl << endl;

        cout << "Find area of circle again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}

void circumCirc()
{
    do {
        system("CLS");

        char op;
        double n1, n2 = 0;

        cout << "Would you like to calculate using <r> radius or <d> diameter?\t";
        cin >> op;
        op = tolower(op);

        if (op == 'r') {
            cout << "Enter the radius:\t";
            cin >> n1;

            n2 = 2 * pi * n1;
        }
        else if (op == 'd') {
            cout << "Enter the diameter:\t";
            cin >> n1;

            n2 = pi * n1;
        }
        else
            cout << "Invalid option.\n";

        cout << endl << "The circumference of the circle is " << n2 << endl << endl;

        cout << "Find circumference again? Y/N\t";
        cin >> b;
        b = toupper(b);
        cout << endl;

    }
    while (b == 'Y');
}
