#include <vector>
#include <algorithm>

bool isSameVectors(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i * 2 - 1);
    }
    return pile;
}

bool isSameVectors(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(isSameVectors(make_a_pile(8), {1, 3, 5, 7, 9, 11, 13, 15}) == true);
    return 0;
}