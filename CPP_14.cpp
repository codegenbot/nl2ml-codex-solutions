#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (size_t i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    vector<string> expected = {"W", "WW", "WWW"};
    assert(issame(all_prefixes("WWW"), expected));
    cout << "All tests passed!" << endl;
    return 0;
}