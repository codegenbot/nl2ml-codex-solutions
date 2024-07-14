#include <vector>
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    bool first = true;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') {
            if (!first)
                result += char(toupper(s[i + 1]));
            else
                result += s[i + 1];
            i++;
        } else if (s[i] == ' ') {
            if (!first)
                result += char(toupper(s[i + 1]));
            else
                result += s[i + 1];
            i++;
        } else {
            if (first)
                result += tolower(s[i]);
            else
                result += toupper(s[i]);
        }
        first = false;
    }
    
    return result;
}

int main() {
    string s;
    while (cin >> s) {
        cout << camelCase(s) << endl;
    }
    return 0;
}