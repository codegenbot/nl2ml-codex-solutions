#include <iostream>
#include <vector>
#include <string>

std::string int_to_roman(int number) {
    std::pair<int, std::string> romanMap[] = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                               {400, "CD"}, {100, "C"}, {90, "XC"},
                                               {50, "L"}, {40, "XL"}, {10, "X"},
                                               {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    std::string roman = "";
    for (auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            roman += pair.second;
        }
    }
    return roman;
}

int main() {
    std::cout << int_to_roman(1000);
    return 0;
}