#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    int i;
    for (i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (result.size()) {
                result[0] = toupper(result[0]);
            }
            string word = s.substr(i + 1);
            if (!word.empty())
                result += word;
            break;
        } else if (s[i] == ' ') {
            if (i > 0) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(0, i);
            string word = s.substr(i + 1);
            if (!word.empty())
                result += word;
            break;
        } else {
            if (result.size() == 0)
                result += s[i];
            else
                result += toupper(s[i]);
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}