```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1;
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;
}

int main() {
    assert(next_smallest({3,4,5}) == 4);
    std::cout << "Tests passed!" << std::endl;
    return 0;
}