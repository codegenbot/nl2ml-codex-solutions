#include <iostream>
#include <string>
#include <vector>

std::string int_to_mini_roman(int number){
    std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    std::vector<std::string> symbols = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    std::string result = "";
    
    for (int i = 0; i < values.size(); ++i) {
        while (number >= values[i]) {
            result += symbols[i];
            number -= values[i];
        }
    }
    
    return result;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Roman Numeral: " << int_to_mini_roman(number) << std::endl;

    return 0;
}