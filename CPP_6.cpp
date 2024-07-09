#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int max_depth = 0, depth = 0;
    for (char c : paren_string) {
        if (c == '(') { depth++; max_depth = max(max_depth, depth); }
        else if (c == ')') depth--;
        else if (c == ' ') { depths.push_back(max_depth); max_depth = 0; depth = 0; }
    }
    depths.push_back(max_depth);
    return depths;
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}