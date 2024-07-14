#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    std::string input;
    while (true) {
        std::cout << "Enter a tweet: ";
        std::getline(std::cin, input);
        std::cout << validateTweet(input) << std::endl;
    }
    return 0;
}