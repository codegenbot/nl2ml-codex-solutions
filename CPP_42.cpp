#include <vector>

std::vector<int> incr_list(std::vector<int> l) {
    for(int& num : l) {
        num++;
    }
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}