#include <string>

string make_palindrome(string str);

int main() {
    // code here
    return 0;
}

string make_palindrome(string str){
    int n = str.length();
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    string palindrome = str + rev_str.substr(1, n);
    return palindrome;
}