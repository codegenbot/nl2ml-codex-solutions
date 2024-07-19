#include <vector>
#include <string>

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count >= 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count >= 0) {
                current_group += c;
            } else {
                count = 0;
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
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}