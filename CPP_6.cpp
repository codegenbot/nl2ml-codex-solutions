#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_nested_parens(std::string paren_string);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}

std::vector<int> parse_nested_parens(std::string paren_string){
    std::vector<int> levels;
    int max_level = 0;
    int current_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            max_level = std::max(max_level, current_level);
        } else if (c == ')') {
            current_level--;
        }
    }

    levels.push_back(max_level);

    return levels;
}