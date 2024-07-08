#include <vector>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (auto digit : digits) {
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