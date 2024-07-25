#include <vector>
#include <string>

std::vector<std::string> roman_numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

std::string int_to_roman(int number) {
    std::string roman = "";
    for (int i = 0; i < sizeof(values)/sizeof(values[0]); i++) {
        while (number >= values[i]) {
            roman += roman_numerals[i];
            number -= values[i];
        }
    }
    return roman;
}