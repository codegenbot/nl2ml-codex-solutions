#include <vector>
#include <string>
#include <cassert>

namespace contest {
    bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool contest::issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(contest::issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), std::vector<std::string>{"xxx", "xxxAAA", "xxx"}));
    return 0;
}