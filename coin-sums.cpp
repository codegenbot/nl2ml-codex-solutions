int pennies = cents / 1;
cents %= 1;

int quarters = cents / 25;
cents %= 25;

int dimes = cents / 10;
cents %= 10;

int nickles = cents / 5;
cents %= 5;

cout << quarters << endl;
cout << dimes << endl;
cout << nickles << endl;
cout << pennies << endl;