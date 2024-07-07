#include <iostream>
#include <string>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0;
    while (cents > 4) { 
        pennies++;
        cents -= 1; 
    }

    int quarters = 0;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    int dimes = 0;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int nickles = 0;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    cout << to_string(quarters) << endl;
    cout << to_string(dimes) << endl;
    cout << to_string(nickles) << endl;
    cout << to_string(pennies) << endl;

    return 0;
}