#include <vector>

int count_nums(std::vector<int> n){
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = num;
        while (temp != 0) {
            sum += abs(temp % 10);
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}