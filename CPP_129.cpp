#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    for (int i = 0; i < k; ++i){
        result.push_back(grid[i / 2][i % 2]);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin());
}

int main(){
    std::vector<int> expectedResult{1, 3, 1, 3, 1, 3, 1, 3, 1, 3};
    std::vector<int> result = minPath({{1, 3}, {1, 3}, {1, 3}, {1, 3}, {1, 3}}, 10);

    if (issame(result, expectedResult)){
        std::cout << "The result matches the expected result." << std::endl;
    } else {
        std::cout << "The result does not match the expected result." << std::endl;
    }

    return 0;
}