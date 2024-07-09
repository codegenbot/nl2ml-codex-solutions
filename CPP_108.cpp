```cpp
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (auto num : n) {
        if (num < 0) {
            num = -num;
        }
        int sum_of_digits = 0;
        while (num > 0) {
            sum_of_digits += num % 10;
            num /= 10;
        }
        if (sum_of_digits > 0) {
            count++;
        }
    }
    return count;
}