#include <vector>
#include <string>
#include <algorithm>

vector<string> reverse_delete(string s, string c);

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

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    vector<string> output;
    output.push_back(result);
    output.push_back(isPalindrome ? "True" : "False");
    return output;
}

int main() {
    // assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}