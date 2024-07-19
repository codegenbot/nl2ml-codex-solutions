#include <iostream>
#include <vector>
#include <algorithm>

int search(const std::vector<int>& lst) {
    int result = -1;
    for (int num : lst) {
        int freq = std::count(lst.begin(), lst.end(), num);
        if (num > freq && freq >= num) {
            result = std::max(result, num);
        }
    }
    return result;
}

int main() {
    assert (search({3, 10, 10, 9, 2}) == -1);
    return 0;
}