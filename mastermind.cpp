#include <iostream>
#include <string>
using namespace std;

int main() {
    string code, guess;
    int whitePegs = 0, blackPegs = 0;

    cin >> code >> guess;

    for (int i = 0; i < code.length(); i++) {
        if (code[i] == guess[i]) {
            blackPegs++;
        } else if (code.find(guess[i]) != string::npos && !whitePegs) { // added check to make sure the guessed character is not already used as a white peg
            whitePegs++;
        }
    }

    cout << whitePegs << " " << blackPegs << endl;

    return 0;
}