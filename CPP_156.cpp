```cpp
#include <string>

const char* roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

const char* int_to_roman(int n) {
    if (n >= 1000) return const_cast<const char*>(("M" + int_to_roman(n - 1000)));
    else if (n >= 900) return "CM";
    else if (n >= 500) return const_cast<const char*>(("D" + int_to_roman(n - 500)));
    else if (n >= 400) return "CD";
    else if (n >= 100) return n >= 90 ? "CM" : n >= 50 ? "L" : n >= 40 ? "XL" : n >= 10 ? (n >= 9 ? "IX" : (n >= 5 ? "V" : (n >= 4 ? "IV" : "I"))) + int_to_roman(n - ((n >= 90) || (n >= 50) ? 50 : 10));
    else return "";
}

int main() {
    assert(int_to_roman(1000) == "M");
    return 0;
}