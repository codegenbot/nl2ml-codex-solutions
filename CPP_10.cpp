#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int i = 0, j = str.length() - 1;
    while(i <= j && str[i] == str[j]){
        i++;
        j--;
    }
    string rev = str.substr(0, i);
    string pal = str.substr(i);
    reverse(pal.begin(), pal.end());
    return rev + pal + rev;
}