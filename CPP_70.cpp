#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst);

int main() {
    assert(issame(strange_sort_list({111111}), {111111}) == true);
    return 0;
}