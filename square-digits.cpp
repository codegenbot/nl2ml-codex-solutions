```c++
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
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string result = squareDigits(input); 
    cin.ignore(); // To clear the input buffer
    cout << "Squared digits: " << result << endl;
}