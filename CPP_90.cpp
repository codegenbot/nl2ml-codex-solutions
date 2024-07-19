#include <vector>
#include <algorithm>
#include <initializer_list>
#include <cassert>

using namespace std;

int nextSmallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted(lst);
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i + 1];
        }
    }
    return -1; 
}

int runTest() {
    assert(nextSmallest({-35, 34, 12, -45}) == -35);
    return 0;
}