#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, (int)std::ceil((double)cents/25));
    cents -= quarters * 25;

    int dimes = min(cents / 10, (int)std::ceil((double)cents/10.0));
    cents -= dimes * 10;

    int nickels = min(cents / 5, (int)std::ceil((double)cents/5.0));
    cents -= nickels * 5;

    int pennies = cents;
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}