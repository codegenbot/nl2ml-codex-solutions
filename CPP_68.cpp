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
    return a == b;
}

int main() {
    assert (issame(pluck({7, 9, 7, 1}), {}));
    assert (issame(pluck({7, 9, 4, 1}), {4, 2}));
    assert (issame(pluck({3, 2, 5, 6, 8}), {2, 1}));
    assert (issame(pluck({3, 3, 3, 3}), {}));
    return 0;
}