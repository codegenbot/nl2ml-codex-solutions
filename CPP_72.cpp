#include <iostream>

bool will_it_fly(std::vector<std::vector<int>> q, int w) {
    for (auto v : q) {
        if ((v[0] * v[1]) > w)
            return true;
    }
    return false;
}

int main() {
    std::vector<std::vector<int>> q = {{1, 2}, {3, 4}};
    int w = 6;
    if (!will_it_fly(q, w)) {
        std::cout << "Will not fly.\n";
    } else {
        std::cout << "Will fly.\n";
    }
    return 0;