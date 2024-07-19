#include <string>
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
    if(result.size() == 0){
        int odd_count = 0;
        for(char c : txt){
            if(islower(c) && (c - 'a') % 2 == 1){
                odd_count++;
            }
        }
        result.push_back(to_string(odd_count));
    }
    return result;
}