```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string tweet;
    cout << "Enter a tweet: ";
    getline(cin, tweet);

    if (tweet.find_last_of('\n') != string::npos) {
        tweet.erase(tweet.find_last_of('\n'));
    }

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
        return 0;
    }

    if (tweet.size() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << endl;
    }
    return 0;
}