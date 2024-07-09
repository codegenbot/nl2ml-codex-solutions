#include <string>
#include <iostream>

using namespace std;

string encrypt(string s){
    string result = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c >= 'a' && c <= 'z'){
            c = (c - 'a' + 3) % 26 + 'a';
        } else if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' + 3) % 26 + 'A';
        }
        result += c;
    }
    return result;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Encrypted string: " << encrypt(s) << endl;
    return 0;
}