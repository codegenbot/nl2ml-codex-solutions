#include <algorithm>
#include <string>
#include <vector>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::pair<std::string, std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    return {result, result == result_reversed ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia").first, std::vector<std::string>{""}));
    assert(issame(reverse_delete("mamma", "mia").second, std::vector<std::string>{"True"}));
}