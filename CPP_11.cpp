#ifndef MAIN_SECTION
#define MAIN_SECTION

#include <string>
#include <cassert>

std::string string_xor(const std::string &a, const std::string &b);

std::string string_xor(const std::string &a, const std::string &b) {
    std::string result = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    assert(string_xor("0101", "0000") == "0101");
    return 0;
}

#endif // MAIN_SECTION