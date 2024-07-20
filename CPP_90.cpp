#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            if (i == 1) return sorted[i];
        }
    }
    return -1; // Return None
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}