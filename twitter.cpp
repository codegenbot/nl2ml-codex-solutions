#include <iostream>
#include <string>

std::string validateTweet(const std::string& tweet) {
    if (tweet.empty()) return "You didn't type anything";
    if (tweet.length() > 140) return "Too many characters";
    return "Your tweet has " + std::to_string(tweet.length()) + " characters";
}

int main() {
    while(true) {
        std::string tweet;
        std::cout << "Enter a tweet: ";
        if (!(std::getline(std::cin, tweet)) || std::cin.fail()) break; 
        std::cout << validateTweet(tweet) << std::endl;
    }
    return 0;
}