#include<stdio.h>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    string prefix = "";
    for(int i=str.length()-1; i>=0 && !is_palindrome(prefix+str.substr(i)); i--);
    if(is_palindrome(prefix+str))return prefix+str;
    return prefix+str+string(str.rbegin(),str.rend());
}