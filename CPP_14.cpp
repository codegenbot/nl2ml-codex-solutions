#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    assert(issame(all_prefixes("WWW") , {"W", "WW", "WWW"}));
}