#include <string>
#include <vector>
#include <iostream>
#include <cassert>
#include <sstream>

using namespace std;

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> split_words(std::string txt) {
    std::vector<std::string> words;
    std::stringstream ss(txt);
    std::string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

int main() {
    assert(issame(split_words(""), {"0"}));
    return 0;
}