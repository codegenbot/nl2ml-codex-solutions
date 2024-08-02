#include <vector>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your implementation here
}

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    std::set<int> s1(l1.begin(), l1.end());
    std::set<int> s2(l2.begin(), l2.end());
    std::set<int> intersection;
    
    std::set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(intersection, intersection.begin()));
    
    return std::vector<int>(intersection.begin(), intersection.end());
}

int main() {
    assert(common({4, 3, 2, 8}, {}) == {});
    return 0;
}