```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::string buffer;

    for (char c : str) {
        if (c == ' ') {
            if (!buffer.empty()) {
                result.push_back(buffer);
                buffer = ""; 
                buffer += " "; // Changed this line
            }
        } else if (c != delimiter) {
            buffer += c;
        }

        if (c == delimiter || c == '\0') {
            if (!buffer.empty() && buffer != " ") { // Changed this condition
                result.push_back(buffer);
                buffer = ""; 
                buffer += delimiter; // Changed this line
            }
        }
    }

    if (!buffer.empty() && buffer != " ") { // Changed this condition
        result.push_back(buffer);
    }

    return result;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (int i = 0; i < segments.size(); i++) {
        if (!result.empty()) {
            result += toupper(segments[i][0]);
        } else {
            result += segments[i];
        }
        if (i < segments.size() - 1) {
            result += segments[i].substr(1);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, input);

    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}