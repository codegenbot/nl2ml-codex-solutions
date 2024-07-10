```cpp
#include <vector>
#include <algorithm>
#include <string>

bool will_it_fly(std::vector<int> q, int w) {
    std::string str = "";
    for (int i : q) {
        str += std::to_string(i);
    }
    if (str != std::string(str.rbegin(), str.rend()).s) return false;
    long sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}