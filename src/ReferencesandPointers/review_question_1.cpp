int *a, b, c;
 a = &b;
 b = 5;
 c = 1;
 b = b - b;
 c = b * b;
 *a = c - *a;
 a = &c;
 *a = c - 7;
 c = c + c;
 *a = *a + b;
 c = c + b;
 b = c - 3;
 c = *a - 7;
 cout << *a << endl;
 cout << b << endl;
 cout << c << endl;
 