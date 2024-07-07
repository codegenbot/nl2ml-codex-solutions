#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool main_function() {
    assert(issame(all_prefixes("WWW"), {"W", "WW", "WWW"}));
    return true;
}