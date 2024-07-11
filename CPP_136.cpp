#include <vector>
#include <climits>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> largest_smallest_integers(std::vector<int> lst) {
    std::vector<int> result = {INT_MIN, INT_MAX};
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;

    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        }
        if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }

    result[0] = largest_negative;
    result[1] = smallest_positive;

    return result;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    return 0;
}