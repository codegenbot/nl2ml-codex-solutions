#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group += c;
            }
        }
        else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            }
            else {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

void test() {
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))")[0], "()"));
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))")[1], "(())"));
    assert(issame(separate_paren_groups("( ) (( )) (( )( ))")[2], "(()())"));
}

int main() {
    test();
    return 0;
}