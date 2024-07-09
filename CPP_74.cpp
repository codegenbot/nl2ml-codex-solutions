#include <iostream>
#include <vector>
#include <cassert>

int totalChars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return totalChars(a) == totalChars(b);
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}