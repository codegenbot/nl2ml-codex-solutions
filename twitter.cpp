```c++
#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    tweet.erase(0, find(tweet.begin(), tweet.end(), '\n') - tweet.begin());
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    if (tweet.length() > 140) {
        return "Too many characters";
    }
    return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    cout << validateTweet(tweet) << endl;
    return 0;
}