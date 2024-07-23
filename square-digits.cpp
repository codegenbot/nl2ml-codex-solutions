#include <vector>
#include <iostream>
#include <string>

using namespace std;

string squareDigits(string input) {
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        int digit = input[i] - '0';
        result += to_string(digit * digit);
    }
    return result;
}

int main() {
    string input;
    cin >> input;
    cout << squareDigits(input) << endl;
    return 0;
}