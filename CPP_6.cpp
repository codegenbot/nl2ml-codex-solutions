#include <vector>
#include <algorithm>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_nested_parens(std::string paren_string){
    std::vector<int> depths;
    int max_depth = 0;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = std::max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    depths.push_back(max_depth);
    return depths;
}

int main() {
    std::string input_string = "( ( ) ) ( ( ) ) ( ) ";
    std::vector<int> depths = parse_nested_parens(input_string);
    std::vector<int> expected_output = {2, 2, 2, 1};
    assert(issame(depths, expected_output));
    
    return 0;
}