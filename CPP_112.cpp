#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(string a, string b) {
    return a == b;
}

string reverse_delete(string s, string c) {
    string result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    return (result == reversed) ? "True" : "False";
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), ""));
    return 0;
}