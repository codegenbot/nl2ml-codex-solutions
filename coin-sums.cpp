```cpp
int pennies = cents % 5; // calculate the remaining cents after using nickels
cents /= 5;

int nickels = cents / 5;
cents %= 5;

int dimes = cents / 10;
cents %= 10;

int quarters = cents / 25;
cout << quarters << endl;
cout << dimes << endl;
cout << nickels << endl;
cout << pennies << endl;