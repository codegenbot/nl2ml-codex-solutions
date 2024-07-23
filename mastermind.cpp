#include <iostream>
#include <string>
#include <utility>

using namespace std;

int mastermind(string code, string guess) {
    int blackPegs = 0;
    int whitePegs = 0;
    
    for(int i = 0; i < 4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            for(int j = 0; j < 4; j++) {
                if(i != j && code[j] == guess[i]) {
                    whitePegs++;
                    break;
                }
            }
        }
    }
    
    return make_pair(blackPegs, whitePegs);
}

int main() {
    string code, guess;
    cout << "Enter the Mastermind code (4 characters): ";
    cin >> code;
    cout << "Enter your guess: ";
    cin >> guess;
    pair<int, int> result = mastermind(code, guess);
    cout << "Black pegs: " << result.first << ", White pegs: " << result.second << "\n";
}