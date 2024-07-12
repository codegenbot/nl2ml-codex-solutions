```
#include <iostream>
#include <vector>
#include <cassert>

std::string exchange(const std::vector<int>& lst1, const std::vector<int>& lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount == 0 ? "YES" : "NO";
}

std::cout << exchange({1, 3, 5}, {2, 4, 6}) << std::endl;