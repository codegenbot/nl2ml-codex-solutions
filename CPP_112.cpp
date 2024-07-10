#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

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

int main() {
    assert(issame(reverse_delete("mamma", "mia"), std::vector<std::string>{"", "True"}));
    std::cout << "Test Passed" << std::endl;

    return 0;
}