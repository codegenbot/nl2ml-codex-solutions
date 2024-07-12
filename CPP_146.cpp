#include <vector>
#include <string>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            std::string numStr = std::to_string(std::abs(num));
            if(numStr.front() % 2 != 0 && numStr.back() % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int result = specialFilter(std::vector<int>{});
    return 0;
}