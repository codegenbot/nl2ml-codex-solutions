#include <iostream>
#include <string>
using namespace std;

int main() {
    string tweet;
    getline(cin, tweet, '\n');

    if (tweet.empty()) {
        cout << "You didn't type anything" << endl;
    } else if (tweet.size() > 140) {
        cout << "Too many characters" << endl;
    } else {
        cout << "Your tweet has " << tweet.size() << " characters" << endl;
    }

    return 0;
}