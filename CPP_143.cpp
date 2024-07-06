```cpp
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& s, const std::string& delimiter) {
    std::vector<std::string> result;
    size_t pos = 0;
    std::string temp = s; 
    while ((pos = temp.find(delimiter)) != std::string::npos) {
        result.push_back(temp.substr(0, pos));
        temp.erase(0, pos + delimiter.length());
    }
    result.push_back(temp);
    return result;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    for (const auto& word : split(sentence, " ")) {
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result;
}