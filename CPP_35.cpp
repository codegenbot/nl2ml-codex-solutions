```cpp
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> l = {-5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int maxVal = *std::max_element(l.begin(), l.end());
    return std::abs(maxVal);
}