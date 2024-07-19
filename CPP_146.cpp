#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            std::string numStr = std::to_string(num);
            if(numStr.front() % 2 != 0 && numStr.back() % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    // Example of how to call the function
    assert(specialFilter({}) == 0);
    
    return 0;
}