#include <vector>
#include <algorithm>

vector<int> parse_nested_parens(string paren_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> depths;
    int max_depth = 0;
    int curr_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            curr_depth++;
            max_depth = max(max_depth, curr_depth);
        } else if (c == ')') {
            curr_depth--;
        } else if (c == ' ') {
            depths.push_back(max_depth);
            max_depth = 0;
            curr_depth = 0;
        }
    }

    depths.push_back(max_depth);

    return depths;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}