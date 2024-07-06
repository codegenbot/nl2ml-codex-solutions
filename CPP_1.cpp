```cpp
#include <cassert>
#include <vector>
#include <string>

using namespace std;

bool issame(vector<string>& a) {
    vector<string> b = {a[0], a[1], a[2]};
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
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

int run_tests() {
    assert(issame(separate_paren_groups("( ) (( ")) == true);
    return 0;
}