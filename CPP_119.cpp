#include <string>
#include <vector>

using namespace std;

bool match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close);
}

int main() {
    assert(match_parens({{"("}, {")"}}) == true);
    return 0;
}