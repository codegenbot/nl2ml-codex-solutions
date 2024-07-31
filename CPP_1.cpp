#include <iostream>
#include <vector>
#include <string>
#include <cassert>

namespace std {

    bool issame(const vector<string>& a, const vector<string>& b){
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
                if (open_braces > 0) {
                    current_group += c;
                } else if (open_braces == 0) {
                    result.push_back(current_group);
                    current_group = "";
                }
            }
        }

        return result;
    }

}

int main() {
    assert(std::issame(std::separate_paren_groups("( ) (( )) (( )( ))"), std::vector<std::string>{"()", "(())", "(()())"}));
    return 0;
}