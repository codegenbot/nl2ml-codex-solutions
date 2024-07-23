#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    
    bool capitalize = false;
    for (char &c : input) {
        if (c == ' ') {
            cout << c;
        } else if (c == '-') {
            capitalize = true;
        } else {
            if (capitalize) {
                cout << (char)toupper(c);
                capitalize = false;
            } else {
                cout << c;
            }
        }
    }
    
    return 0;
}