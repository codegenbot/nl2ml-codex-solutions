#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    cout << squareDigits("0") << endl; // 0
    cout << squareDigits("1") << endl; // 1
    cout << squareDigits("2") << endl; // 4
    cout << squareDigits("3") << endl; // 9
    cout << squareDigits("4") << endl; // 16
    return 0;
}