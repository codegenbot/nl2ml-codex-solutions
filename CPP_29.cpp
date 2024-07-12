```
#include <vector>
#include <string>
#include <initializer_list>

bool isSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[(i + 1) % a.size()]) return false;
    }
    return true;
}

int main() {
    vector<string> a;
    cout << "Enter strings (stop when empty):" << endl;
    string s;
    while (getline(cin, s)) {
        if (s.empty()) break;
        a.push_back(s);
    }

    bool same = isSame(a, a);

    string prefix;
    cout << "Enter prefix:" << endl;
    getline(cin, prefix);
    vector<string> result = filter_by_prefix(a, prefix);

    if (!same) 
        cout << "Strings are not the same." << endl;
    else 
        cout << "Strings are the same." << endl;

    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;

}

vector<string> filter_by_prefix(vector<string> strings, string prefix) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;