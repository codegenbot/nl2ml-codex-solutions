#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);
    return {result, (is_palindrome ? "True" : "False")};
}

vector<string> reverse_delete(string s, string c);

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{"", "True"});
    return 0;
}