#include <vector>
#include <cassert>

int specialFilter(const vector<int>& nums){
    assert(!nums.empty());
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string numStr = to_string(num);
            if ((numStr.front() - '0') % 2 != 0 && (numStr.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}