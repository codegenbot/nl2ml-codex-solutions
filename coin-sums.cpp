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
        if (dimes > 0) {
            while(cents >= 10) { 
                cents -= 10;
                dimes--;
            }
        } else {
            nickles = cents / 5;
            cents %= 5;
        }
    }

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents; 

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}