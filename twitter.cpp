#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (std::count(tweet.begin(), tweet.end(), [](char c){ return std::isalnum(c); }) > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(std::count(tweet.begin(), tweet.end(), [](char c){ return std::isalnum(c); })) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}