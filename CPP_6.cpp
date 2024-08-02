#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> levels;
    int current_level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
        } else if (c == ')') {
            current_level--;
        }
        levels.push_back(current_level);
    }
    return levels;
}