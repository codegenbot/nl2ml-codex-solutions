#include <vector>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> intersperse(std::vector<int> numbers, int delimiter){
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}