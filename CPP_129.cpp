#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    
    for (int i = 0; i < k; ++i) {
        for (const auto& row : grid) {
            for (const auto& num : row) {
                result.push_back(num);
            }
        }
    }
    
    return result;
}

// assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));