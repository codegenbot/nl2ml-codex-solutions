#include <string>
#include <vector>
#include <utility>
#include <cassert>

std::string int_to_mini_roman(int number){
    std::vector<std::pair<int, std::string>> roman_map = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };

    std::string result = "";
    for(const auto& pair : roman_map){
        while(number >= pair.first){
            result += pair.second;
            number -= pair.first;
        }
    }

    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");

    return 0;
}