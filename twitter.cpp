#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    cin.width(141); 
    getline(cin, tweet);

    if (tweet.length() > 140) {
        cout << "Too many characters" << endl;
    } else if(tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << endl;
    }
}