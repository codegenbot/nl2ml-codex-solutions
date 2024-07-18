#include <vector>

std::vector<int> parse_nested_parens(std::string paren_string);

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> depths;
    int current_depth = 0;
    int max_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            current_depth = 0;
            max_depth = 0;
        }
    }

    depths.push_back(max_depth);

    return depths;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}