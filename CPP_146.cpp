#include <vector>
#include <string>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string numStr = std::to_string(num);
            if ((numStr[0] - '0') % 2 != 0 && (numStr[numStr.size() - 1] - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}