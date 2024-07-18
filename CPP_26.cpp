#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b){
        return a == b;
    }
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    assert(std::issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    // Add more test cases here if needed

    return 0;
}