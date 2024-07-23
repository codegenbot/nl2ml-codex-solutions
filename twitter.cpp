#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);

    if (tweet.empty()) {
        return "You didn't type anything";
    }

    if (tweet.length() > 140) {
        return "Too many characters";
    }

    return "Your tweet has " + to_string(tweet.length()) + " characters";
}