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
            
            result += word + " ";
            start = i+1;
        }
    }
    
    return result;
}

int main() {
    // Test cases
    cout << spinWords("a") << endl;  // Output: a
    cout << spinWords("this is a test") << endl;  // Output: this is a test
    cout << spinWords("this is another test") << endl;  // Output: this is rehtona test
    cout << spinWords("hi") << endl;  // Output: hi
    
    return 0;
}