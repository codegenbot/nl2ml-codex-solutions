```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    int open_count = 0;
    string current_group;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    vector<string> expected = {"()", "(())", "(()())"};
    vector<string> actual = separate_paren_groups("( ) (( )) (( )( "));
    if (!issame(expected, actual)) {
        for (const string& s : actual) {
            cout << s << endl;
        }
    } else {
        cout << "Tests passed." << endl;
    }
    return 0;
}