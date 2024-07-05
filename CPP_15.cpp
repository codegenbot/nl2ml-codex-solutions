#include <iostream>
#include <sstream>
#include <string>

std::string string_sequence(int n) {
    std::ostringstream oss;
    for (int i = 0; i <= n; ++i) {
        oss << i << " ";
    }
    return oss.str();
}

int main() {
    assert(string_sequence(10) == "0 1 2 3 4 5 6 7 8 9 10");
    std::cout << string_sequence(10);
    return 0;
}