#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> sorted_list_sum(vector<string> a, vector<string> b) {
    a.insert(a.end(), b.begin(), b.end());
    
    a.erase(remove_if(a.begin(), a.end(), [](const string& s) { return s.length() % 2 != 0; }), a.end());
    
    sort(a.begin(), a.end(), [](const string& a, const string& b) {
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });

    return a;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    vector<string> result = sorted_list_sum({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"});
    
    for (const auto& str : result) {
        cout << str << " ";
    }

    assert(issame(result, {"cc", "dd", "aaaa", "bbbb"}));

    return 0;
}