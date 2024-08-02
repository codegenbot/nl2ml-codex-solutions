#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (!word.empty()) {
                if (word.length() >= 5) {
                    for (int j = word.length()-1; j >= 0; j--) {
                        result += word[j];
                    }
                } else {
                    result += word;
                }
                word.clear();
            } 
            else {
                result += ' ';
            }
        } else {
            word += str[i];
        }
    }
    
    if (!word.empty()) {
        if (word.length() >= 5) {
            for (int j = word.length()-1; j >= 0; j--) {
                result += word[j];
            }
        } else {
            result += word;
        }
        word.clear();
    }
    
    return result;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);
    cout << spinWords(str) << endl;
    return 0;
}