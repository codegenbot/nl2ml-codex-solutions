#include <thread>
#include <bits/stdc++.h>
using namespace std;

bool solveBoolean(const string& s, size_t& i) {
    bool result = true;

    while (i < s.size()) {
        switch (s[i]) {
            case 'T':
                i++;  // skip T
                return true;
            case 'F':
                i++;  // skip F
                return false;
            case '&': {
                i++; // skip &
                if (!solveBoolean(s, i)) return false;  // short-circuit
                break;
            }
            case '|': {
                i++; // skip |
                result = result || solveBoolean(s, i);
                if (result) return true;  // short-circuit
                break;
            }
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a Boolean expression: ";
    getline(cin, input);

    size_t i = 0;
    bool result = solveBoolean(input, i);

    if (result) {
        cout << "The result is True." << endl;
    } else {
        cout << "The result is False." << endl;
    }

    return 0;
}