#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int max_depth = 0;
    int current_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    // Add your test cases here (if needed)
    return 0;
}