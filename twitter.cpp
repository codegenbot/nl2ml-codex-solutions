```c++
#include <iostream>
#include <sstream>
#include <string>

std::string validateTweet(std::string);

int main() {
    std::string tweet;
    std::cout << "Enter your tweet: ";
    std::getline(std::cin, tweet);
    std::string result = validateTweet(tweet);
    std::cout << result << std::endl;
    return 0;
}

std::string validateTweet(std::string tweet) {
    if (tweet.length() > 140) {
        return "Too many characters";
    } else if (tweet.empty()) {
        return "You didn't type anything";
    } else {
        tweet.erase(tweet.find_last_not_of("\n") + 1); // Remove trailing newline
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}