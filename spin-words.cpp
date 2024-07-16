#include <iostream>
using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ') {
            result += " ";
            i++;
        } else if ((int)(str.substr(i).c_str()[str.substr(i).find(' ') != string::npos ? str.substr(i).find(' ') : str.substr(i).size() - 1]) >= 122 || (int)(str.substr(i).c_str()[str.substr(i).find(' ') != string::npos ? str.substr(i).find(' ') : str.substr(i).size() - 1]) <= 96) {
            int len = str.substr(i, str.substr(i).find(' ') != string::npos ? str.substr(i).find(' ') : str.substr(i).size());
            for (int j = len; j > 0; j--) {
                result += str.substr(i, len)[len - j];
            }
            i += len;
        } else {
            int k = 0;
            while (i < str.length() && str[i] != ' ') {
                result += str[i];
                i++;
                k++;
            }
            if (k > 0) {
                for (int j = k; j > 0; j--) {
                    result += str[i - 1];
                }
                i--;
            } else {
                result += str.substr(i);
                i++;
            }
        }
    }
    return result;
}

int main() {
    cout << spinWords("Hello World") << endl;
    return 0;
}