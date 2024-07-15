#include <string>
#include <boost/algorithm/string.hpp>

std::string spinWords(std::string str) {
    std::vector<std::string> words;
    boost::split(words, str, boost::is_space());
    
    std::string result;
    
    for (auto &word : words) {
        if (word.length() >= 5)
            std::reverse(word.begin(), word.end());
        result += word + " ";
    }
    
    return result.substr(0, result.length() - 1);
}