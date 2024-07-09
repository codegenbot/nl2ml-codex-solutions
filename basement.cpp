#include <vector>

int basement(const std::vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    return basement({-2, 5, -4, 3});
}