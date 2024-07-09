#include <bits/stdc++.h>
using namespace std;

vector<string> sorted_list_sum(vector<string> lst) {
    // Remove strings with odd lengths from the vector
    lst.erase(std::remove_if(lst.begin(), lst.end(),
        [](const string& s) { return s.length() % 2; }),
        lst.end());

    // Sort the remaining vector by length and then alphabetically
    std::sort(lst.begin(), lst.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() < b.length();
        });

    return lst;
}

int main() {
    vector<string> lst = {"aa", "bb", "ccc", "dd", "eee", "ff"};
    vector<string> result = sorted_list_sum(lst);
    for(auto s : result) {
        cout << s << endl;
    }
    return 0;