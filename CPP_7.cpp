```
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(std::string s : a) {
        if(find(b.begin(), b.end(), s) == b.end())
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring){
    std::vector<std::string> result;
    for(std::string s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;

}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}