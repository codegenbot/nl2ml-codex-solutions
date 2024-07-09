#include <vector>
#include <string>
#include <cassert>

using namespace std;

std::string int_to_mini_roman(int number) {
    vector<pair<int, string>> romans = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},
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

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;