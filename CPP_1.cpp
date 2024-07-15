#include <iostream>
#include <vector>
#include <string>
#include <cassert>

vector<string> separate_paren_groups(string paren_string);
bool issame(vector<string> a, vector<string> b);

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    string input_string = "((group1)(group2)(group3))";
    vector<string> expected_groups = {"(group1)", "(group2)", "(group3)"};

    vector<string> actual_groups = separate_paren_groups(input_string);
    assert(issame(actual_groups, expected_groups));

    return 0;
}