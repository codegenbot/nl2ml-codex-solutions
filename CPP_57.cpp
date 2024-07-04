#include <vector>
#include <cassert>

bool monotonic(const std::vector<int>& l) {
    if (l.empty()) return true;
    bool increasing = true, decreasing = true;
    for (size_t i = 1; i < l.size(); ++i) {
        if (l[i] > l[i - 1]) decreasing = false;
        if (l[i] < l[i - 1]) increasing = false;
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic({9, 9, 9, 9}) == true);
    assert(monotonic({1,2,2,3}) == true);
    assert(monotonic({6,5,4,4}) == true);
    assert(monotonic({1,3,2}) == false);

    return 0;
}