#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <initializer_list>

std::vector<std::string> select_words(std::string s, int k) {
    std::vector<std::string> words;
    std::istringstream iss(s);
    for (std::string word; iss >> word;) {
        if (word.size() >= k) {
            words.push_back(word.substr(0, k));
        }
    }
    return words;
}

bool isSame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}