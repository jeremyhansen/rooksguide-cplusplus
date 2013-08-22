int sum = 0, temp; // Declares sum and temp. Initializes sum to 0.

cout << "Please input a number other than 0 to add: ";
cin >> temp;    // Get user input storing it in the variable temp

while (temp != 0)
{
    sum += temp;    // Add the value of temp to sum
    cout << endl << "Total: " << sum << endl;   // Outputs sum total
    cout << "Add another number? "
         << "If yes, input an integer greater than or less than 0. "
         << "If no, input 0." << endl;   // Get more user input
    cin >> temp;
}
