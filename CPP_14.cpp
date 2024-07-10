#include <string>
#include <vector>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> all_prefixes(std::string str){
    std::vector<std::string> prefixes;
    std::string prefix = "";
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

int main(){
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return 0;
}