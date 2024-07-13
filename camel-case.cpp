```cpp
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '-') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            result += s.substr(i + 1, 1).toupper();
            i++;
        } else if (s[i] == ' ') {
            if (!result.empty()) {
                result[0] = toupper(result[0]);
            }
            string word = result;
            result = "";
            for (char c : word) {
                result += tolower(c);
            }
        } else {
            result += s[i];
        }
    }
    return !result.empty() ? (result[0] = toupper(result[0]), result + s.substr(i)) : s;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        if (str == "quit") break;
        cout << "The camelCase is: " << camelCase(str) << endl;
    }
    return 0;
}