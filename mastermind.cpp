#include <string>
using namespace std;

int mastermind(string code, string guess) {
    int whitePegs = 0;
    int blackPegs = 0;
    
    for(int i=0; i<4; i++) {
        if(code[i] == guess[i]) {
            blackPegs++;
        } else {
            bool found = false;
            for(int j=0; j<4; j++) {
                if(guess[j] == code[i] && !found) {
                    whitePegs++;
                    found = true;
                }
            }
        }
    }
    
    return blackPegs + whitePegs;
}