#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int i = 0;
    while (i < str.length()) {
        if (str.find(" ", i) == -1 || i + 1 >= str.length()) {
            result += str.substr(i);
            break;
        }
        int j = str.find(" ", i);
        string word = str.substr(i, j - i);
        if (word.length() >= 5) {
            for (int k = word.length() - 1; k >= 0; --k)
                result += word[k];
        } else
            result += word;
        i = j + 1;
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a sentence (or 'q' to quit): ";
        cin >> str;
        if (str == "q")
            break;
        cout << spinWords(str) << endl;
    }
    return 0;
}