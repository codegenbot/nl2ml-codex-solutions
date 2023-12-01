#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> splitWords(string sentence){
    vector<string> words;
    string word = "";
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' ' || sentence[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += sentence[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}