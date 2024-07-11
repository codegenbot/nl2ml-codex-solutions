#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') continue;
        int j = i;
        while (j < str.length() && str[j] != ' ') j++;
        string word = str.substr(i, j - i);
        if (word.length() >= 5) {
            for (int k = word.length() - 1; k >= 0; k--) result += word[k];
        } else result += word;
        result += " ";
        i = j;
    }
    return result.substr(0, result.length() - 1);
}

int main() {
    string str;
    cout << "Enter a string of words: ";
    getline(cin, str);
    cout << "Spun result: " << spinWords(str) << endl;
    return 0;
}