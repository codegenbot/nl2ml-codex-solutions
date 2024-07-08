```
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"}, "xxx");
    assert(issame(result, {"xxx", "xxxAAA", "xxx"}));
    return 0;
}