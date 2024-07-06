#include <string>
using namespace std;

bool solveBoolean(string s) {
    bool t = true;
    bool f = false;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '&') {
            return t && f;
        } else if (s[i] == '|') {
            return t || f;
        } else if (s[i] == 't') {
            t = true;
            f = false;
        } else if (s[i] == 'f') {
            t = false;
            f = true;
        }
    }
    
    return t;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = solveBoolean(s);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}