#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, 999);
    cents %= 25;

    int dimes = min(cents / 10, static_cast<int>(quarters));
    cents %= 10;

    int nickles = min(cents / 5, static_cast<int>(dimes + (cents / 10 > 0)));
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}