#include <iostream>
#include <vector>

using namespace std;

vector<int> parse_nested_parens(string paren_string);

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
    
    return 0;
}

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int max_depth = 0;
    int current_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        } else if (c == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }

    result.push_back(max_depth);

    return result;
}