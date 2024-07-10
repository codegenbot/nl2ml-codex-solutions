```cpp
#include <string>
#include <cctype>

std::string camelCase(const std::string& s) {
    std::string result = "";
    bool capitalizeNext = true;

    for (char c : s) {
        if (c == '-' || c == ' ') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += std::toupper(c);
            capitalizeNext = false;
        } else {
            result += std::tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str = "camel-case example-test-string";
    std::cout << camelCase(str) << std::endl;
    return 0;
}