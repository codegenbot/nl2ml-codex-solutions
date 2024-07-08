#include <initializer_list>

#include <vector>
#include <string>

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0 || (prefix.size() > 0 && !s.compare(0, prefix.size(), prefix))) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    assert(isSame(filterByPrefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    return 0;
}