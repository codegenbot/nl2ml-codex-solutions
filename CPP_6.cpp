#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<int> nesting_levels;
    int max_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            nesting_levels.push(1);
            max_level = max(max_level, 1);
        } else if (c == ')') {
            int current_level = nesting_levels.top();
            nesting_levels.pop();
            result.push_back(current_level);
            max_level = max(max_level, current_level);
        }
    }

    return result;
}