#include <iostream>
#include <vector>
#include <cassert>

int search(std::vector<int> lst);

int search(std::vector<int> lst) {
    int result = -1;
    for (int num : lst) {
        int freq = 0;
        for (int i : lst) {
            if (i == num) {
                freq++;
            }
        }
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}

int main() {
    assert(search({3, 10, 10, 9, 2}) == -1);
    return 0;
}