```cpp
#include <vector>
#include <iostream>

int sumOfOdds(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::cout << sumOfOdds({3, 13, 2, 9}) << std::endl;
    return 0;
}