#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);
    
    if(tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if(!tweet.empty() && !tweet.find(' ')) {
        cout << "Your tweet has " << tweet.length() << " characters" << endl;
    } else {
        cout << "You didn't type anything" << endl;
    }
}