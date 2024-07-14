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
            
            if(word.length() >= 5) {
                reverse(word.begin(), word.end());
            }
            
            result += word + (i == str.length() ? "" : " ");
            start = i+1;
        }
    }
    
    return result;
}

int main() {
    cout << spinWords("a") << endl; // a
    cout << spinWords("this is a test") << endl; // this is a test
    cout << spinWords("this is another test") << endl; // this is rehtona test
    cout << spinWords("hi") << endl; // hi
    
    return 0;
}