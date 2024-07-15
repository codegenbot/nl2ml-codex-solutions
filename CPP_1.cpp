#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string);

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            } else {
                current_group += c;
            }
        }
    }

    return result;
}

int main() {
    string input;
    cin >> input;

    vector<string> groups = separate_paren_groups(input);

    for (string group : groups) {
        cout << group << endl;
    }

    return 0;
}