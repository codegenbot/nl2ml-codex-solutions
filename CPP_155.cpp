#include <iostream>
#include <vector>

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    
    std::string numStr = std::to_string(std::abs(num));
    
    for(char c : numStr){
        int digit = c - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    std::vector<int> result = {evenCount, oddCount};
    return result;
}

int main(){
    std::vector<int> expected_result = {1, 0};
    std::vector<int> actual_result = even_odd_count(0);
    
    if (is_same(actual_result, expected_result)) {
        std::cout << "Test case passed." << std::endl;
    } else {
        std::cout << "Test case failed." << std::endl;
    }
    
    return 0;
}