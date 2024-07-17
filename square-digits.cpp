#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a positive integer: ";
    cin >> input;
    string result = squareDigits(input);
    cout << "The squared digits are: " << result << endl;
    return 0;
}

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        result += to_string(digit * digit);
    }
    return result;
}