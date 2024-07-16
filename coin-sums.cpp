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

    std::cout << quarters << endl;
    std::cout << dimes << endl;
    std::cout << nickles << endl;
    std::cout << pennies << endl;

    return 0;
}