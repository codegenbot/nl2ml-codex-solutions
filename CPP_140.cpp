```cpp
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = "";
    for (char c : text) {
        if (c == ' ') {
            if (!result.empty() && result.back() != ' ') {
                result += "%20";
            }
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << fix_spaces("   Exa 1 2 2 mple");
}