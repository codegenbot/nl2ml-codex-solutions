#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst){
    std::vector<std::string> result;
    for(const std::string& s : lst){
        if(s.length() % 2 == 0){
            result.push_back(s);
        }
    }
    std::sort(result.begin(), result.end(), [](const std::string& a, const std::string& b){
        if(a.length() == b.length()){
            return a < b;
        }
        return a.length() < b.length();
    });
    return result;
}

int main() {
    assert(issame(sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
    return 0;
}