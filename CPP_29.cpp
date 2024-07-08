```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (string s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> strings(n);

    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    string prefix;
    cin >> prefix;

    vector<string> filteredStrings = filter_by_prefix(strings, prefix);
    bool sameStrings = issame(filteredStrings, strings);

    if(sameStrings)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}