#include <vector>
#include <string>
#include <cassert>
#include <iostream>

std::vector<int> parse_nested_parens(const std::string& paren_string) {
    std::vector<int> result;
    int max_depth = 0, current_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            if (max_depth > 0) {
                result.push_back(max_depth);
            }
            max_depth = 0;
            current_depth = 0;
        }
    }
    if (max_depth > 0) {
        result.push_back(max_depth);
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert((parse_nested_parens("(()(())((())))") == std::vector<int>{4}));
    assert((parse_nested_parens("(()) ((())) (((())))") == std::vector<int>{2, 3, 4}));
    assert(issame(parse_nested_parens("(()(())((())))"), std::vector<int>{4}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}