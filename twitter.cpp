#include <string>
using namespace std;

string tweetValidator(string tweet) {
    if (tweet.empty())
        return "You didn't type anything";
    else if (tweet.length() > 140)
        return "Too many characters";
    else
        return "Your tweet has " + to_string(tweet.length()) + " characters";
}

int main() {
    string input;
    cout << "Enter a tweet: ";
    getline(cin, input);
    cout << tweetValidator(input) << endl;
    return 0;
}