#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25; 

    while(cents >= 10) { 
        cents -= 10;
        quarters++;
    }

    int dimes = cents / 10;
    cents %= 10;

    while(cents >= 5) { 
        int nickles = cents / 5;
        while (cents >= 5) {
            cents -= 5;
            nickles++;
        }
        pennies = cents;
        break;
    }

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}