#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int, std::string>> romanNumerals = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
    {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"}, {10, "x"}, {9, "ix"}, {5, "v"},
    {4, "iv"}, {1, "i"}};

std::string int_to_roman(int number) {
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
    int number = 1000;
    std::cout << "Roman numeral: " << int_to_roman(number) << std::endl;
    return 0;
}