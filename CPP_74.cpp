#include <vector>
#include <string>
#include <cassert>

int total_chars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2);

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame({"this"}, {}));
}