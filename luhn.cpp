#include <vector>
using namespace std;

int luhn(vector<int> cardNumber) {
    int sum = 0;
    bool alternate = false;
    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];
        if (alternate) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
        alternate = !alternate;
    }
    return sum;
}