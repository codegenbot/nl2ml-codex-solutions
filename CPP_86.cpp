#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string anti_shuffle(string s){
    string result = "";
    for(int i=0; i<s.size();i++){
        if(s[i] == ' '){
            result += " ";
            continue;
        }
        string word = "";
        for(int j=i;j<s.size() && s[j] != ' ';j++){
            word += s[j];
        }
        sort(word.begin(),word.end());
        i = j - 1;
        result += word;
    }
    return result;
}