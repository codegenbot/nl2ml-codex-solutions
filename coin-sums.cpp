#include <iostream>

int main() {
    int cents;
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;

    std::cin >> cents;

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    pennies = cents;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}