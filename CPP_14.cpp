#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& s) {
    std::vector<std::string> result;
    for (int i = 0; i <= s.length(); i++) {
        result.push_back(s.substr(0, i));
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) return false;
    return true;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}