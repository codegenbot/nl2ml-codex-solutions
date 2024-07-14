#include <vector>

int findFirstNegativeIndex(const std::vector<int>& vec) {
    int sum = 0;
    for (int i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1; // or any other value to indicate that no such index exists
}