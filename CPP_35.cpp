```cpp
#include <algorithm>
#include <cmath>

int absoluteMax(int arr[], int n) {
    std::vector<int> l(arr, arr+n);
    return *std::max_element(l.begin(), l.end());
}