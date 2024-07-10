#include <iostream>
#include <map>
#include <cassert>

map<char,int> histogram(string test){
    map<char, int> freq;
    int maxFreq = 0;
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
            maxFreq = max(maxFreq, freq[c]);
        }
    }
    
    map<char, int> result;
    for (auto it : freq) {
        if (it.second == maxFreq) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}