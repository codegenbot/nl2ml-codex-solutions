#include <string>
using namespace std;

string squareDigits(string input) {
    string result = "";
    for (char c : input) {
        int digit = c - '0';
        int squared = digit * digit;
        result += to_string(squared);
    }
    return result;
}