#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

pair<string, string> reverse_delete(string s, string c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    return {result, result == reverse_result ? "True" : "False"};
}