#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, (cents - (cents % 25)) / 25);
    cents -= quarters * 25;

    int dimes = min((cents - quarters * 25 - nickels * 5) / 10, ((cents - quarters * 25 - nickels * 5) % 10) / 10);
    cents -= dimes * 10;

    int nickels = min((cents - dimes * 10) / 5, (cents - dimes * 10) % 5);
    cents -= nickels * 5;

    int pennies = cents;
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}