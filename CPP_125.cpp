#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(char a, char b) {
    return a == b;
}

std::vector<std::string> split_words(std::string txt);

int main() {
    assert(issame('a', 'a'));
    std::string text = "hello, world";
    std::vector<std::string> words = split_words(text);
    for (const auto& word : words) {
        std::cout << word << std::endl;
    }
    return 0;
}

std::vector<std::string> split_words(std::string txt){
    std::vector<std::string> result;
    std::string word = "";
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
        result.push_back(std::to_string(std::count_if(txt.begin(), txt.end(), [](char c){return std::islower(c) && (c-'a') % 2 == 1;})));
    }
    return result;
}