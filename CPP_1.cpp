#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Implement your logic for comparing two vectors of strings here
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else if (balance == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }

    return result;
}

int main() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))"), {"()", "(())", "(()())"}));
    return 0;
}