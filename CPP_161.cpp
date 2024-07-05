#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

string solve(string s) {
    bool hasLetter = false;
    for (char c : s) {
        if (isalpha(c)) {
            hasLetter = true;
            break;
        }
    }

    if (!hasLetter) {
        reverse(s.begin(), s.end());
        return s;
    }

    for (char &c : s) {
        if (isalpha(c)) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }
    return s;
}