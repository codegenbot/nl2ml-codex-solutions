#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);
std::vector<int> sort_third(std::vector<int> l);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> res = l;
    for (int i = 0; i < l.size(); i += 3) {
        std::sort(res.begin() + i, res.begin() + i + 3);
    }
    return res;
}