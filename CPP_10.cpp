#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_palindrome(string str){
    // Test if given string is a palindrome 
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str){
    int n = str.length();
    if (n == 0) return "";
    for (int i = n; i >= 0; i--) {
        if (is_palindrome(str.substr(0, i))) {
            string prefix = str.substr(i);
            reverse(prefix.begin(), prefix.end());
            return str + prefix;
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Resulting palindrome: " << make_palindrome(input) << endl;
    return 0;
}