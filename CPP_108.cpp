#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        int local_count = count; 
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count = local_count + 1; 
        }
    }
    return count;
}

int main() {
    std::vector<int> n = {1};
    assert(count_nums(n) == 1);
    return 0;
}