#include <algorithm>
#include <vector>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; 
    for (int i = 0; i < sorted.size(); i++) {
        if (i == 1) return sorted[i];
    }
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}