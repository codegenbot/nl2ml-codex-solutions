#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;
    
    for(const string& word : words){
        int uniqueChars = 0;
        int charCount[26] = {0};
        
        for(char c : word){
            if(charCount[c - 'a'] == 0){
                uniqueChars++;
                charCount[c - 'a']++;
            }
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }
    
    return maxWord;
}

int main() {
    assert ((find_max({"play", "play", "play"}) == "play"));
    
    return 0;
}