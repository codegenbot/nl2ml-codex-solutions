```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::vector<std::string>> a, std::vector<std::vector<std::string>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(int j = 0; j < a[i].size(); j++) {
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    auto filtered = filter_by_prefix(strings, "xxx");
    std::vector<std::vector<std::string>> b={{{filtered.begin(), filtered.end()}}};
    if (issame(std::vector<vector<string>>{{"xxx"}}, b)) return 0;
}