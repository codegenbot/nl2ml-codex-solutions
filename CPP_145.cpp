#include <vector>
#include <algorithm>
#include <cassert>

namespace std {
    bool issame(const std::vector<int>& a, const std::vector<int>& b){
        return a == b;
    }

    std::vector<int> order_by_points(std::vector<int> points){
        std::sort(points.begin(), points.end());
        return points;
    }
}

int main() {
    assert(std::issame(std::order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}