#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> remove_duplicates(std::vector<int> numbers){
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), std::vector<int>{1, 4, 5}));
    return 0;
}