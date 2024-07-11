#include <vector>
#include <algorithm>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];

        if (doubleNext) {
            digit *= 2;

            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum % 10 == 0;
}

int main() {
    std::vector<int> cardNumber = {1,9,4,6,7,2,1,4,9,3,3,0,7,3,3,4};
    int result = luhn(cardNumber);
    return 0;
}