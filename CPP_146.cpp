#include <vector>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(abs(num) > 10 && (abs(num)%10)%2 != 0 && (abs(num)/10)%10%2 != 0)
            count++;
    }
    return count;