#include <algorithm>
#include <cassert>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = max(0, total - remaining);
    return {eaten, left};
}

bool issame(vector<int> v1, vector<int> v2) {
    return v1 == v2;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));

    return 0;
}