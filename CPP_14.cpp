#include <vector>
#include <string>

vector<string> all_prefixes(string str){
    vector<string> prefixes;
    for (int i = 1; i <= str.size(); ++i) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}