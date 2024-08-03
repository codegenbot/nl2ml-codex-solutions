#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    for (int num : lst) {
        if (num != prev) {
            count++;
            if (count == 2) {
                return num;
            }
            prev = num;
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    // Add more test cases as needed
    return 0;
}