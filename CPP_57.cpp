#include <vector>
#include <cassert>

bool monotonic(std::vector<int> l) {
    if (l.empty()) {
        return true;
    }
    bool increasing = true;
    bool decreasing = true;
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > l[i - 1]) {
            decreasing = false;
        } else if (l[i] < l[i - 1]) {
            increasing = false;
        }
    }
    return increasing || decreasing;
}