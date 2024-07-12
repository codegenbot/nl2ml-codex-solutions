int pairedDigits(string digits) {
    int sum = 0;
    for (int i = 0; i < digits.length() - 1; i++) {
        if (digits[i] == digits[i + 1]) {
            sum += digits[i] - '0';
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