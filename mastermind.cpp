#include <iostream>
#include <string>
#include <map>

using namespace std;

int whitePegs(string code, string guess) {
    int count = 0;
    map<char, int> codeMap;

    for(int i=0; i<4; i++) {
        codeChar = code.substr(i,1);
        guessChar = guess.substr(i,1);

        if(code.find(guessChar) != string::npos && codeChar != guessChar) {
            count++;
        }
    }

    return count;
}

int blackPegs(string code, string guess) {
    int count = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            count++;
        }
    }
    
    return count;
}

int main() {
    string code, guess;
    cin >> code >> guess;
    cout << whitePegs(code, guess) << endl;
    cout << blackPegs(code, guess) << endl;
    return 0;
}