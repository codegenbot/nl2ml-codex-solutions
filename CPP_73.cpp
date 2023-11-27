#include <vector>
#include <algorithm>
#include <cassert>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int count = 0;
    
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            count++;
        }
    }
    
    return count;
}

int main() {
    assert (smallest_change(std::vector<int>({0, 1})) == 1);
    return 0;
}