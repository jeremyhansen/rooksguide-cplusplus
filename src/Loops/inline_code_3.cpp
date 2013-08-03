int sum = 0, temp; //declares sum and temp. Initializes sum to 0.

cout << “Please give a number to add:
     “;
cin >> temp;    //has user input the temporary variable to add to sum

while (temp != 0)
{
    sum += temp;    //sets sum equal to sum+temp at start of loop
cout << endl << “total:
         “ << sum << endl;   //outputs sum total
    cout << “Add another number ? If yes, input an integer greater than or less than 0. ”
         << “If no, input 0.” << endl;   //asks user to input temp variable again
    cin >> temp;
}
