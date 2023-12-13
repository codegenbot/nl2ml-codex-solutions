```cpp
#include <vector>
#include <cassert>

int add_elements(const std::vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    assert(add_elements({1}, 1) == 0);
    assert(add_elements({10, 20, 30}, 3) == 60);
    assert(add_elements({5, 15, 25, 35}, 4) == 40);
    assert(add_elements({12, 35, 101, 50}, 4) == 47);
    
    return 0;
}
```