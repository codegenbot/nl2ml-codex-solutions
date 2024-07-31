#include <vector>
#include <algorithm>
#include <cassert>

int main() {
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    assert(issame(l, std::vector<int>{0, 2, 3, 5, 9, 123}));
    return 0;
}