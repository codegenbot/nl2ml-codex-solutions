#include <vector>
#include <iostream>
#include <string>

int pairedDigits(const string& s) {
    int sum = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i+1]) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    string input;
    cin >> input;
    cout << pairedDigits(input) << endl;
    return 0;
}