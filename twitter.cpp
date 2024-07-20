#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if (tweet.empty()) {
        return "You didn't type anything";
    }
    
    int len = tweet.length();
    if (len > 140) {
        return "Too many characters";
    } else {
        return "Your tweet has " + to_string(len) + " characters";
    }
}

int main() {
    string tweet;
    cin >> tweet;
    cout << validateTweet(tweet) << endl;
    return 0;
}