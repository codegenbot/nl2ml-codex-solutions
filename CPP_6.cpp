#include <stack>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_nesting = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_nesting = max(max_nesting, 1);
        } else if (c == ')') {
            nesting_levels.pop();
            max_nesting = max(max_nesting, nesting_levels.empty() ? 0 : nesting_levels.top());
        }
    }

    while (!nesting_levels.empty()) {
        result.push_back(nesting_levels.top());
        nesting_levels.pop();
    }

    reverse(result.begin(), result.end());

    return result;
}