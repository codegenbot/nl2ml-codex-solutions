#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::vector<std::string> result = reverse_delete("mamma", "mia");
    std::vector<std::string> expected = {"", "True"};

    bool isEqual = issame(result, expected);

    std::cout << (isEqual ? "Test Passed" : "Test Failed") << std::endl;

    return 0;
}