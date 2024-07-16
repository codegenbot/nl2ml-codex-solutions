#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (auto i = digits.size() - 1; i >= 0; --i) {
        if (i % 2 == 1) {
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 1, 7, 2, 8, 9};
    std::cout << luhn(digits) << std::endl;
    return 0;
}