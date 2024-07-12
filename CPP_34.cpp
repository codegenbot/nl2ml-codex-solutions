#include <algorithm>
#include <vector>

bool issame(int a, int b);

std::vector<int> fix_code(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end(), [](int a, int b){ return a == b; }), l.end());
    return l;
}