#include <string>
#include <iostream>

using namespace std;

int pairedDigits(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i < s.length() - 1 && s[i] == s[i+1]) || (i == s.length() - 1)) {
            sum += s[i] - '0';
        }
    }
    return sum;
}

int main() {
    string input;
    cout << "Enter a string of digits: ";
    cin >> input;
    cout << "Sum of paired digits is: " << pairedDigits(input) << endl;
    return 0;
}