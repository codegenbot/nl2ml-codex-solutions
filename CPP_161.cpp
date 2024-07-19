#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

string solve(string s){
    bool hasLetter = false;
    for (char &c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }
    if (!hasLetter) {
        reverse(s.begin(), s.end());
    }
    return s;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}