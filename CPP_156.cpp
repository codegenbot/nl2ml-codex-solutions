#include <string>
#include <vector>
#include <utility>

std::string int_to_roman(int number) {
    std::vector<std::pair<int, std::string>> romans = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},
                                         {50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    std::string roman = "";
    for (auto p : romans) {
        while (number >= p.first) {
            number -= p.first;
            roman += p.second;
        }
    }
    return roman;
}