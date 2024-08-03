#include <iostream>
#include <vector>
#include <cassert>

bool monotonic(const std::vector<int>& l) {
    int n = l.size();
    bool increasing = true, decreasing = true;
    for (int i = 1; i < n; ++i) {
        if (l[i] < l[i - 1]) increasing = false;
        if (l[i] > l[i - 1]) decreasing = false;
    }
    return increasing || decreasing;
}

int main() {
    assert(monotonic({9, 9, 9, 9}) == true);
    
    return 0;
}