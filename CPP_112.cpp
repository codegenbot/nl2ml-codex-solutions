#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
}