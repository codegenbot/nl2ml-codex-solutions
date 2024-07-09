#include <algorithm>
#include <vector>
#include <initializer_list>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(*lst.begin());
        lst.erase(lst.begin());
        if (!lst.empty())
            std::sort(lst.begin(), lst.end());
    }

    return result;
}

int main() {
    assert(issame(strange_sort_vector({1, 2, 3}), {1, 2, 3}));
    return 0;