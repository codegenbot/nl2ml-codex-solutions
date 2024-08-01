#include <vector>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter){
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main(){
    std::vector<int> test1 = {1, 2, 3};
    std::vector<int> test2 = {1, 2, 3};
    std::vector<int> test3 = intersperse({4, 5, 6}, 0);

    std::cout << std::boolalpha << issame(test1, test2) << std::endl;
    std::cout << std::boolalpha << issame(test1, test3) << std::endl;

    return 0;
}