#include <vector>
#include <algorithm>
#include <string>
#include <initializer_list>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string chars) {
    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(chars.begin(), chars.end(), s[i]) == chars.end()) {
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

int main() {
    // Read input
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    
    // Read the characters to remove
    std::string chars;
    std::cout << "Enter characters to remove: ";
    std::cin >> chars;
    
    // Process and output
    auto result = reverse_delete(s, chars);
    for (const auto& item : result) 
        std::cout << item << " "; 
    std::cout << '\n';
}