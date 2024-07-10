#include <iostream>
#include <string>

using namespace std;

string validateTweet(string tweet) {
    if(tweet.empty()) return "You didn't type anything";
    if(input.length() > 140) return "Too many characters";
    return "Your tweet has " + to_string(input.length()) + " characters";
}

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    cout << validateTweet(input) << endl;
    return 0;
}