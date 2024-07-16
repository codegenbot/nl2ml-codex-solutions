#include <iostream>
#include <string>
#include <cassert>
#include <cctype>

using namespace std;

string solve(string s){
    for(char &c : s){
        if(isalpha(c)){
            if(islower(c)){
                c = toupper(c);
            } else {
                c = tolower(c);
            }
        }
    }
    int n = s.size();
    for(int i = 0; i < n / 2; ++i){
        swap(s[i], s[n - i - 1]);
    }
    return s;
}

int main(){
    assert(solve("#ccc") == "#CCC");
    return 0;
}