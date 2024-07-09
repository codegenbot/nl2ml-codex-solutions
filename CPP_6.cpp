#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b);

vector<int> parse_nested_parens(string paren_string){
    vector<int> result;
    int max_depth = 0;
    int current_depth = 0;
    for(char c : paren_string){
        if(c == '('){
            current_depth++;
            if(current_depth > max_depth){
                max_depth = current_depth;
            }
        } else if(c == ')'){
            current_depth--;
        } else if(c == ' '){
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    result.push_back(max_depth);
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    // Your main function code here
    return 0;
}