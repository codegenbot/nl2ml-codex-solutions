#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<string> separate_paren_groups(string paren_string);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                group += c;
            } else if (balance == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}