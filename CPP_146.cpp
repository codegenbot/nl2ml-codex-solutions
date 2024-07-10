#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; ++i){
        std::cout << "Enter element " << (i + 1) << ": ";
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    
    int result = specialFilter(input);
    std::cout << "The number of filtered elements is: " << result << std::endl;
    
    return 0;
}