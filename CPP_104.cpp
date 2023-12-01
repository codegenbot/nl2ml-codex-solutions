#include <vector>
#include <algorithm>

std::vector<int> unique_digits(std::vector<int> x) {
    std::vector<int> result;
    for (int num : x) {
        bool hasEvenDigit = false;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(isSame(unique_digits({135, 103, 31}), {31, 135}));
}