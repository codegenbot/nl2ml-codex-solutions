#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> select_words(string s, int n);

vector<string> select_words(string s, int n){
    vector<string> result;
    if(s.empty()){
        return result;
    }
    string word = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            int consonantCount = 0;
            for(int j = 0; j < word.length(); j++){
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
                    consonantCount++;
                }    
            }
            if(consonantCount == n){
                result.push_back(word);
            }
            word = "";
        }
    }
    int consonantCount = 0;
    for(int j = 0; j < word.length(); j++){
        if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
            consonantCount++;
        }
    }
    if(consonantCount == n){
        result.push_back(word);
    }
    return result;
}

int main(){
    assert(select_words("a b c d e f", 1) == vector<string>{"b", "c", "d", "f"});
    return 0;
}