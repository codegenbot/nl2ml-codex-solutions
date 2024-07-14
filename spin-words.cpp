#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    string word = "";

    for (char c : str) {
        if (c == ' ') {
            if (word.length() >= 5) {
                for (int i = word.length() - 1; i >= 0; i--)
                    result += word[i];
            } else
                result += word;
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() >= 5)
        for (int i = word.length() - 1; i >= 0; i--)
            result += word[i];
    else
        result += word;

    return result;
}

int main() {
    cout << spinWords("a") << endl; // Output: a
    cout << spinWords("this is a test") << endl; // Output: this is a test
    cout << spinWords("this is another test") << endl; // Output: this is rehtona test
    cout << spinWords("hi") << endl; // Output: hi

    return 0;
}