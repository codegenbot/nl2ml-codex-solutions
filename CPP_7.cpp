#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;

}

vector<vector<string>> filter_by_substring(vector<string> str, string substr) {
    vector<vector<string>> result;
    for (const auto& s : str) {
        if (s.find(substr) != std::string::npos) {
            if(issame({s}, {"grunt", "prune"}))
                result.push_back({s});
        }
    }
    return result;

}

int main() {
    filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    return 0;
}