```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(const std::string& str, char ch) {
    std::vector<std::string> tokens;
    std::string token = "";

    for (char c : str) {
        if (!isascii(c)) {
            c = ' ';
        }
        if (c == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }

    // Don't forget to add the last token
    tokens.push_back(token);

    return tokens;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isascii(char c) {
    return static_cast<unsigned char>(c) <= 0x7F;
}

int main() {
    int longest_prime_length = 0;
    std::string longest_prime_word;

    for (const auto &word : split("here is", ' ')) {
        if (!is_prime(word.length())) continue;
        
        if (word.length() > longest_prime_length) {
            longest_prime_length = word.length();
            longest_prime_word = word;
        }
    }

    std::cout << "Longest prime length: " << longest_prime_length << ", Longest prime word: " << longest_prime_word << std::endl;

    return 0;
}