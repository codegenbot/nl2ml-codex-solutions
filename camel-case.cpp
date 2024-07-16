```cpp
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::string join(const std::vector<std::string>& tokens, char delimiter = ' ') {
    std::string result;
    for (const auto& token : tokens) {
        if (!token.empty()) {
            if (!result.empty()) {
                result += " ";
            }
            result += token;
        }
    }
    return result; 
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        if (pos != 0) { 
            tokens.push_back(str.substr(0, pos));
        }
        str = str.substr(pos + 1);
    }
    if (!str.empty()) {
        tokens.push_back(str);
    }
    return tokens;
}

std::string camelCase(const std::string& str) {
    std::vector<std::string> words = split(str, '-');
    
    if (words.empty()) {
        return "";
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (!words[i].empty()) { 
            if (!result.empty()) {
                result += " ";
            } else {
                result += std::toupper(words[i][0]);
            }
            result += words[i].substr(1);
        }
    }
    
    return result;
}

int main() {
    std::cout << join(std::vector<std::string>(split("hello-world-example", '-')), '') << std::endl;
    return 0;
}