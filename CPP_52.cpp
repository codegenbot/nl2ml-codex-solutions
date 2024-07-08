#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(std::vector<int>, int);

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    return 0;
}

bool below_threshold(vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}