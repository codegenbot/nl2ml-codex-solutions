#include <stdio.h>
#include <string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(), str.rend());
    return s == str;
}

string make_palindrome(string str) {
    string palindrome = str;
    int len = str.length();
    int i = len - 1;
    while (i >= 0) {
        if (is_palindrome(str.substr(i))) {
            break;
        }
        i--;
    }
    string prefix = str.substr(0, i);
    string reversed_prefix(prefix.rbegin(), prefix.rend());
    palindrome += reversed_prefix;
    return palindrome;
}