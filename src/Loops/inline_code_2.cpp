char cont; //short for continue; continue is a key word and can’t be used

do
{

    cout << "Go Cadets!\n";

    cout << "Do you want to continue? Type Y for yes: \t";
    cin >> cont;

}
while (cont == 'Y');
