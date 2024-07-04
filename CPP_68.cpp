#include <vector>
#include <cassert>
using namespace std;

vector<int> pluck(vector<int> arr) {
    int min_even = -1;
    int min_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (min_even == -1 || arr[i] < min_even) {
                min_even = arr[i];
                min_index = i;
            }
        }
    }
    
    if (min_even == -1) return {};
    return {min_even, min_index};
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert (issame(pluck({7, 9, 7, 1}), {}));
    assert (issame(pluck({3, 2, 5, 8, 6}), {2, 1}));
    assert (issame(pluck({10}), {10, 0}));
    return 0;
}