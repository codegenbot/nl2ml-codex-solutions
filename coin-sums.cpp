```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    while (cents >= 10) {
        dimes = cents / 10;
        cents -= dimes * 10;
    }

    while (cents >= 5) {
        nickles = cents / 5;
        cents -= nickles * 5;
    }

    pennies = cents;

    cout << std::to_string(quarters) << " quarters" << endl;
    cout << std::to_string(dimes) << " dimes" << endl;
    cout << std::to_string(nickles) << " nickles" << endl;
    cout << std::to_string(pennies) << " pennies" << endl;

    return 0;
}