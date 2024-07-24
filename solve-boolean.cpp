#include <iostream>
using namespace std;

bool evalBoolean(string s) {
    if (s.empty())
        return false;

    int j = 0;
    while (j < s.length() && (s[j] == '|' || s[j] == '&'))
        j++;

    string opStr;
    for (char c : s.substr(0, j)) {
        opStr.push_back(c);
    }
    bool result = false;
    if (opStr[0] == '|') {
        for (char c : s.substr(j)) {
            if (c == 'T')
                result = true;
            else if (c == 'F') {
                result = false;
                return result;
            }
        }
    } else {
        bool left = false;
        for (char c : s.substr(0, j)) {
            if (c == 'T' && opStr[1] != '|')
                left = true;
            else if (c == 'F' && opStr[1] != '&')
                return false;
            else if (c == 'F' && opStr[1] == '&') 
                return false; 
        }
        result = left;
    }

    return result;
}

int main() {
    string s;
    cout << "Enter a Boolean expression: ";
    cin >> s;
    bool result = evalBoolean(s);
    if (result)
        cout << "True";
    else
        cout << "False";
    return 0;
}