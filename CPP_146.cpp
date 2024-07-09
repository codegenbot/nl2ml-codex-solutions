#include <vector>
#include <cassert>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 100) % 2 != 0){
            count++;
        }
    }
    return count;
}