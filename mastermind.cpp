#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool isValidInput(const string& input) {
    return input.length() == 4 && input.find_first_not_of("ABCDEF") == string::npos;
}

int main() {
    string code, guess;

    do {
        cout << "Enter the code (4 characters from A to F): ";
        cin >> code;
    } while (!isValidInput(code));

    do {
        cout << "Enter your guess (4 characters from A to F): ";
        cin >> guess;
    } while (!isValidInput(guess));

    map<char, int> codeFreq, guessFreq;
    
    codeFreq.clear();
    guessFreq.clear();

    int whitePegs = 0, blackPegs = 0;

    for (int i = 0; i < 4; ++i) {
        if (toupper(code[i]) == toupper(guess[i])) {
            blackPegs++;
        } else {
            codeFreq[toupper(code[i])]++;
            guessFreq[toupper(guess[i])]++;
        }
    }

    for (auto it = codeFreq.begin(); it != codeFreq.end(); ++it) {
        whitePegs += min(codeFreq[it->first], guessFreq[it->first]);
    }

    cout << whitePegs << endl << blackPegs << endl;

    return 0;
}