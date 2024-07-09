```cpp
#include <string>
#include <iostream>
using namespace std;

string squareDigits(string input);

int main() {
    string input = "34";
    cout << squareDigits(input) << endl;
    return 0;
}

string squareDigits(string input) {
    string output = "";
    for (char c : input) {
        int digit = c - '0';
        output += to_string(digit * digit);
    }
    return output;
}