#include <algorithm>
#include <vector>

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    if (sorted.size() < 2) return -1; // or any other value that indicates "None"
    
    for (int i = sorted.size() - 2; i >= 0; i--) {
        if (sorted[i] > sorted[i+1]) return sorted[i+1];
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    return 0;
}