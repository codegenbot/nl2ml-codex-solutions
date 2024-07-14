#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];

        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    std::vector<int> digits(16, 0);
    for (int i = 0; i < 16; ++i) {
        digits[i] = i + 1;
    }
    int result = luhn(digits);
    return result;
}