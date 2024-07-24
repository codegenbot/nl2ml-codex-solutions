#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    bool b_exists = false;
    for(const auto& s : b) {
        if(std::find(a.begin(), a.end(), s) != a.end()) 
            b_exists = true;
    }
    return b.size() == 0 || b_exists;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, const std::string& prefix){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> a = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAaaA", "xxx"}, "xxx");
    std::vector<std::string> b = {"xxx", "xxxAAA", "xxx"};
    assert (issame(a, b));
    return 0;
}