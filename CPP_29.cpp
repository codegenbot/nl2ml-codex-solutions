```cpp
#include <vector>
#include <string>

bool issame(std::vector<std::string>, std::vector<std::string> , );
std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaa", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}));
}