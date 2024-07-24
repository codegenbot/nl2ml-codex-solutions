```cpp
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int num = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pile.push_back(num);
            num += 2;
        } else {
            pile.push_back(2 * num - 1); // Ensure all elements are of the same type
        }
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {1, 2, 3, 4, 5, 6, 7, 8}));
    return 0;
}