#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (std::find(c.begin(), c.end(), s[i]) == c.end()) {
            temp += s[i];
        }
    }
    if (temp == std::string(temp).reverse()) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    return result;
}

std::string reverse(std::string str) {
    std::string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}