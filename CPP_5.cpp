#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> intersperse(const std::vector<int>& numbers, int delimiter) {
    std::vector<int> result;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i != 0) {
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    
    return 0;
}