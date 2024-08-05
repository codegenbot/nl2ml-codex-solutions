#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool result = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'T') {
            return true;
        }
        else if (s[i] == 'F') {
            return false;
        }
        else if (s[i] == '&') {
            result &= true;
        }
        else if (s[i] == '|') {
            result |= true;
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    cout << (solveBoolean(s) ? "True" : "False");
    return 0;
}