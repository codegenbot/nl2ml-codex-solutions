#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::pair<int, std::string>> romanNumerals = {{1000, "M"}, {900, "CM"}, {500, "D"},
    {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"},
    {4, "IV"}, {1, "I"}};

std::string int_to_mini_roman(int number) {
    std::string roman = "";
    for (const auto& numeral : romanNumerals) {
        while (number >= numeral.first) {
            roman += numeral.second;
            number -= numeral.first;
        }
    }

    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    std::cout << int_to_mini_roman(1999) << std::endl;
    return 0;
}