```cpp
#include <iostream>
#include <vector>
#include <string>

std::pair<int, std::string> romanMap[] = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                           {400, "CD"}, {100, "C"}, {90, "XC"},
                                           {50, "L"}, {40, "XL"}, {10, "X"},
                                           {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

std::string int_to_roman(int number) {
    std::string roman = ""; // Initialize the string
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    if (number > 0) {
        throw std::runtime_error("Cannot convert to Roman numeral");
    }
    return roman;
}

int main() {
    try {
        for(int i = 1; i <= 4000; i++) {
            std::cout << i << ": " << int_to_roman(i) << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}