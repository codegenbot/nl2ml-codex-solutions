```c++
#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 0; i <= str.size(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(std::vector<std::string> a, std::vector<std::string>& b) {  
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> b = all_prefixes("WWW");
    assert(issame(all_prefixes("WWW"), b));
    return 0;
}