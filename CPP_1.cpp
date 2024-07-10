#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string);

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (depth > 0) {
                current_group += c;
            }
            depth++;
        } else if (c == ')') {
            depth--;
            if (depth > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}