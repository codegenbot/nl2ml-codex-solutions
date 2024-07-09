```cpp
#include <map>
#include <initializer_list>
using namespace std;

string int_to_mini_roman(int number) {
    map<int, string> roman = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string result = "";
    for (auto pair : roman) {
        while (number >= pair.first) {
            number -= pair.first;
            result += pair.second;
        }
    }
    return result;
}

int main() {
    assert(int_to_mini_roman(1000) == "M");
    return 0;
}