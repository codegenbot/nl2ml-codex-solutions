#include <algorithm>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::set<int> uniqueNumbers(numbers.begin(), numbers.end());
    return std::vector<int>(uniqueNumbers.begin(), uniqueNumbers.end());
}