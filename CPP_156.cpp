```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> romanMap;

int main() {
    romanMap = { {1000, "M"}, {900, "CM"}, {500, "D"},
                 {400, "CD"}, {100, "C"}, {90, "XC"},
                 {50, "L"}, {40, "XL"}, {10, "X"},
                 {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} };
    for(int i = 1; i <= 3999; i++) { 
        std::cout << i << ": " << int_to_roman(i) << std::endl;
    }
    assert(int_to_roman(1000) == "M");
    return 0;
}

std::string int_to_roman(int number) {
    std::string roman = ""; // Initialize the string
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}