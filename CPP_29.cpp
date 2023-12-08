#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for (int i = 0; i < strings.size(); i++) {
        if (strings[i].find(prefix) == 0) {
            result.push_back(strings[i]);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), {"xxx", "xxxAAA", "xxx"}));
    cout << "All test cases passed!";
    return 0;
}