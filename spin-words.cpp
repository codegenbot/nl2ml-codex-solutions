#include <vector>
#include <iostream>
#include <string>

using namespace std;

string spinWords(string str) {
    string result = "";
    int start = 0;
    for(int i=0; i<=str.length(); i++) {
        if(i == str.length() || str[i] == ' ') {
            string word = str.substr(start, i-start);
            if(word.length() >= 5)
                result += reverse(word) + " ";
            else
                result += word + " ";
            start = i+1;
        }
    }
    return result;
}

string reverse(string s) {
    string reversed = "";
    for(int i=s.length()-1; i>=0; i--)
        reversed += s[i];
    return reversed;
}

int main() {
    // test cases
    cout << spinWords("a") << endl;  // a
    cout << spinWords("this is a test") << endl;  // this is a test
    cout << spinWords("this is another test") << endl;  // this is rehtona test
    cout << spinWords("hi") << endl;  // hi

    return 0;
}