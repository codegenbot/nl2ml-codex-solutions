#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> points){
    std::sort(points.begin(), points.end());
    return points;
}

int main(){
    std::vector<int> result = order_by_points({0, 6, 6, -76, -21, 23, 4});
    assert(issame(result, std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}