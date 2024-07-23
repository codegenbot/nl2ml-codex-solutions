#include <vector>
#include <iostream>
#include <string>

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    // Your code here
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}