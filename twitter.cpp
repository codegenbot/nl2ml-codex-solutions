```c++
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) {
        return "You didn't type anything";
    } else if(tweet.length() > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + to_string(tweet.length()) + " characters";
    }
}

int main() {
    string tweet;
    cout << "Enter your tweet: ";
    getline(cin, tweet);
    string output = validateTweet(tweet);
    cout << output << endl;
    return 0;
}