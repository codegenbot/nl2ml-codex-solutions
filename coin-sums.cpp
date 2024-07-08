#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = (cents - (quarters * 25)) / 10; 
    if(cents < 25) {
        pennies += cents; 
    } else if(dimes > 0) {
        dimes = dimes;
    }
    cents %= 10;

    int nickles = (cents - (dimes * 10)) / 5; 
    if(cents < 10) {
        pennies += cents; // remaining cents are just pennies
    } else if(nickles > 0) {
        nickles = nickles;
    }
    cents %= 5;

    int pennies = cents;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}