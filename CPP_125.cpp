#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<string> a, vector<string> b);

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
    
    if(result.size() == 1 && result[0].find(',') == string::npos){
        int count = 0;
        for(char c : result[0]){
            if(islower(c) && (c - 'a') % 2 == 1){
                count++;
            }
        }
        result[0] = to_string(count);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}