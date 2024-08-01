#include <vector>
#include <algorithm> 
#include <cassert>   

bool issame(const std::vector<int>& a, const std::vector<int>& b);
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a[0] != b[0]) {
        return a[0] < b[0];
    }
    return a[1] > b[1];
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x);

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), issame);
    return result;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3)[0], {2, 2}));
    return 0;
}