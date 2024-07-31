#include <string>
#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

vector<string> split_words(string txt);

vector<string> split_words(string txt){
    vector<string> result;
    string word = "";
    for(char c : txt){
        if(c == ' ' || c == ','){
            if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()){
        result.push_back(word);
    }
    if(result.size() == 0){
        int oddCount = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                oddCount++;
            }
        }
        result.push_back(to_string(oddCount));
    }
    return result;
}

int main(){
    assert (issame(split_words("") ,{"0"}));
    
    return 0;
}