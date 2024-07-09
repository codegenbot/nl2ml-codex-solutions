#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << quarters << " quarters" << std::endl;
    if (dimes > 0) {
        std::cout << dimes << " dimes" << std::endl;
    }
    if (nickles > 0) {
        std::cout << nickles << " nickels" << std::endl;
    }
    if (pennies > 0) {
        std::cout << pennies << " pennies" << std::endl;
    }

    return 0;
}