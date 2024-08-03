#include <vector>
#include <string>

using namespace std;

vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    string current_group = "";

    for (char c : paren_string) {
        if (c == '(') {
            current_group += c;
        } else if (c == ')') {
            current_group += c;
            result.push_back(current_group);
            current_group = "";
        }
    }

    return result;
}