#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int total_chars1 = 0, total_chars2 = 0;

    for (const std::string& str : lst1) {
        total_chars1 += str.length();
    }

    for (const std::string& str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 == total_chars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}