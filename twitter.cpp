```c++
#include <iostream>
#include <string>

std::string validateTweet(std::string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    else if (tweet.length() > 140) {
        return "Too many characters";
    }
    else {
        return "Your tweet has " + std::to_string(tweet.length()) + " characters";
    }
}

int main() {
    std::string tweet;
    std::cout << "Enter a tweet: ";
    std::getline(std::cin, tweet); // Read the entire input
    tweet.erase(0, tweet.find('\n')); // Remove the newline character if present
    std::cout << validateTweet(tweet) << std::endl;
    return 0;
}