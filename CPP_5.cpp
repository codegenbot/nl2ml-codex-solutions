#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    // function implementation
}

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
    if (numbers.empty()) {
        return result;
    }
    result.push_back(numbers[0]);
    for (int i = 1; i < numbers.size(); i++) {
        result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    // more test cases
    return 0;
}