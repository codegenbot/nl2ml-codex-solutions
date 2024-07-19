#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles, pennies

    int pennies = cents;
    int quarters = pennies / 25;
    pennies %= 25;
    int dimes = pennies / 10;
    pennies %= 10;
    int nickles = pennies / 5;
    pennies %= 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}