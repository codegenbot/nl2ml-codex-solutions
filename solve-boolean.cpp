#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        } else if (s[i] == 'F') {
            return false;
        } else if (s[i] == '&') {
            if(result == false) {
                result = false;
            }
        } else if (s[i] == '|') {
            if(result == false) {
                result = true;
            }
        }
    }
    return result;
}

int main() {
    return 0;
}