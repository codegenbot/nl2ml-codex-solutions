#include <vector>
#include <string>
#include <cassert>

bool issame(const vector<int>& v1, const vector<int>& v2){
    return v1 == v2;
}

vector<int> parse_nested_parens(string paren_string);

int main() {
    string paren_string = "((()) () ()()) ";
    vector<int> result = parse_nested_parens(paren_string);
    vector<int> expected = {3, 1, 2, 0, 0};
    assert(issame(result, expected));
    
    return 0;
}

vector<int> parse_nested_parens(string paren_string){
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