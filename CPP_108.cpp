#include <vector>

int count_nums(std::vector<int> v) {
    int count = 0;
    for (int num : v) {
        if (num < 0) {
            num = -num; // make number positive to simplify sum of digits calculation
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