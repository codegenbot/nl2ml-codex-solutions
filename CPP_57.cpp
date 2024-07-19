#include <vector>
#include <iostream>

bool monotonic(const std::vector<int>& l) {
    bool increasing = true;
    bool decreasing = true;
    for (int i = 1; i < l.size(); ++i) {
        if (l[i] < l[i - 1]) {
            increasing = false;
        }
        if (l[i] > l[i - 1]) {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}

int main() {
    if (monotonic(std::vector<int>{9, 9, 9, 9, 9})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    return 0;
}