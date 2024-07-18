#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using std::vector;
using std::string;

vector<string> all_prefixes(string str){
    vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
  
    return 0;
}