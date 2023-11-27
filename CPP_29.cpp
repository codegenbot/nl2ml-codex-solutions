#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const string& str : strings) {
        if (str.substr(0, prefix.size()) == prefix) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert (issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxA", "xxx"}, "xxx"), {"xxx", "xxxA", "xxx"}));
    
    return 0;
}