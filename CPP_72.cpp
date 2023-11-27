#include <vector>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    if (sum <= w && q == std::vector<int>(q.rbegin(), q.rend())) {
        return true;
    }
    return false;
}