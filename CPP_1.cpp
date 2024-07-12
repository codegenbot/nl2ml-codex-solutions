#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> separate_paren_groups(std::string paren_string) {
    vector<string> result;
    string current_group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                current_group += c;
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count > 0) {
                current_group += c;
            } else if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    assert(separate_paren_groups("( ) (( )) (( )( ))") == vector<string>({"()", "(())", "(()())"}));
    
    return 0;
}