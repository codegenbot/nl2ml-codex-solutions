#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string>(std::allocator<std::string>()) result;

std::vector<std::string> words_string(std::string s, std::vector<std::string> result){
    std::string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word.size() > 0){ 
                result.push_back(word);
                word = "";
            }
        }else{
            word += s[i];
        }
    }
    if(word.size() > 0)  
        result.push_back(word);
    return result;
}

int main(){
    assert(issame(words_string("ahmed     , gamal", result), std::vector<std::string>{"ahmed", "gamal"}));
    return 0;
}