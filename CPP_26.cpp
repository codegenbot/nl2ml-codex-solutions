#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> uniqueNumbers(numbers.begin(), numbers.end());
    uniqueNumbers.erase(std::unique(uniqueNumbers.begin(), uniqueNumbers.end()),
                         uniqueNumbers.end());
    return uniqueNumbers;
}