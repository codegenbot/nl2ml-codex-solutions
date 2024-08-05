#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> generate_integers(int a, int b) {
    std::vector<int> result;
    for(int i = a; i <= b; i++){
        result.push_back(i);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(generate_integers(17, 89), std::vector<int>{}));

    return 0;
}