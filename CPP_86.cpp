#include <string>
std::string anti_shuffle(std::string s) {
    std::string result = "";
    std::string word = "";
    for (char c : s) {
        if (c == ' ') {
            std::sort(word.begin(), word.end());
            result += word + ' ';
            word = "";
        } else {
            word += c;
        }
    }
    std::sort(word.begin(), word.end());
    result += word;
    return result;
}