#include <vector>
#include <cassert>
#include <algorithm>

bool is_same(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b) {
    return a == b;
}

std::vector<int> get_row(std::vector<std::vector<int>> lst, int x) {
    std::vector<int> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(is_same(get_row({{}, {1}, {1, 2, 3}}, 3), {2, 2}));
}