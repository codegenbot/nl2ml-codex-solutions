```cpp
#include <vector>
#include <algorithm>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= 10) { 
            sum += arr[i];
        }
    }
    return sum * k;
}