#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> rolling_max(std::vector<int> numbers){
    std::vector<int> result;
    int max_num = INT_MIN;
    for(int i = 0; i < numbers.size(); i++){
        max_num = std::max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 2, 7, 4};
    std::vector<int> result = rolling_max(numbers);
    assert(issame(result, {1, 3, 5, 5, 7, 7}));
    return 0;
}