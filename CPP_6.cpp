#include <vector>

bool issame(vector<int> v1, vector<int> v2){
    if (v1.size() != v2.size()) {
        return false;
    }
    
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> parse_nested_parens(string paren_string);

int main() {
    // Call parse_nested_parens function here
    return 0;
}