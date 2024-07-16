#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            if (!current_group.empty()) {
                result.push_back(current_group);
                current_group.clear();
            }
        } else if (c == ')') {
            if (!current_group.empty()) {
                current_group.push_back(c);
                result.push_back(current_group);
                current_group.clear();
            }
        } else if (c == ' ') {
            // Ignore spaces
            continue;
        } else {
            current_group.push_back(c);
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}

int main() {
    string input;
    getline(cin, input);
    vector<string> groups = separate_paren_groups(input);
    for (const string& group : groups) {
        cout << group << endl;
    }

    return 0;
}