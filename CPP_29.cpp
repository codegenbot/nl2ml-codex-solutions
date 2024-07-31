```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::pair<std::string, std::string>> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::pair<std::string, std::string>> result; 
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back({prefix, s});
    }
    return result;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"}, "xxx"), {{"xxx", "xxx"}, {"xxx", "xxxAAA"}}));
}