#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<string> separate_paren_groups(string paren_string){
    vector<string> groups;
    string group = "";
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                group += c;
                groups.push_back(group);
                group = "";
            } else {
                group += c;
            }
        }
    }

    return groups;
}

bool issame(vector<string> a, vector<string> b){
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

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));

    cout << "Test cases passed" << endl;
    return 0;
}