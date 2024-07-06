#include <string>
#include <vector>
#include <iostream>

std::string intToMiniRoman(int number) {
    std::vector<std::pair<int, std::string>> roman = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                                         {400, "CD"}, {100, "C"}, {90, "XC"},
                                                         {50, "L"}, {40, "XL"}, {10, "X"},
                                                         {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    std::string result = "";
    
    for (const auto& pair : roman) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    
    return result;
}

int main() {
    assert(intToMiniRoman(1000) == "M");
    std::cout << intToMiniRoman(2000);
    return 0;
}