#include <string>

string squareDigits(string n) {
    string result = "";
    for(int i = 0; i < n.length(); i++) {
        int digit = (n[i] - '0') * (n[i] - '0');
        result += to_string(digit);
    }
    return result;
}