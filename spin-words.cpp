#include <string>
#include <iostream>

using namespace std;

string spinWords(string str) {
    string result = "";
    int length = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (length >= 5)
                for (int j = length - 1; j >= 0; j--)
                    result += str[i - j];
            else
                result += str.substr(i - length, length);
            length = 0;
            result += " ";
        } else {
            length++;
        }
    }
    if (length >= 5)
        for (int i = length - 1; i >= 0; i--)
            result += str[i];
    else
        result += str;
    return result;
}

int main() {
    string s;
    cout << "Enter a sentence: ";
    cin >> s;
    cout << spinWords(s) << endl;
    return 0;
}