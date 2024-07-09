#include <vector>
#include <limits>

std::vector<std::pair<int, int>> pluck_function(std::vector<int> arr) {
    std::vector<std::pair<int, int>> result;
    if (arr.empty()) return result;

    int minEvenIndex = -1;
    int minEvenValue = std::numeric_limits<int>::max();

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenIndex = i;
        }
    }

    if (minEvenIndex != -1) {
        result.push_back({minEvenValue, minEvenIndex});
    }

    return result;
}