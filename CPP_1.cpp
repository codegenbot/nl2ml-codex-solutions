#include <iostream>
#include <vector>
#include <cassert> // Added missing include

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> groups;
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
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}

bool checkSame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {}