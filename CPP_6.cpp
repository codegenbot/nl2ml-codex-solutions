#include <stack>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    stack<pair<char, int>> s;
    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            s.push({paren_string[i], i});
        } else if (paren_string[i] == ')') {
            pair<char, int> top = s.top();
            s.pop();
            result.push_back(top.second - i);
        }
    }
    return result;
}