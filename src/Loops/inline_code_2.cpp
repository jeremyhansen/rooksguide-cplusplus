char cont; // Short for continue; continue is a keyword and cannot be used

do
{
    cout << "Go Cadets!\n";

    cout << "Do you want to continue? Type Y for yes: ";
    cin >> cont;

} while (cont == 'Y');
