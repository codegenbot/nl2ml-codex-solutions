#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    // function implementation here
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    std::vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(std::unique(result.begin(), result.end()), result.end());
    
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));

    return 0;
}