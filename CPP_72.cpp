#include <vector>
#include <cassert>

bool will_it_fly(std::vector<int> q, int w) {
    int sum = 0;
    for (int i = 0; i < q.size(); i++) {
        sum += q[i];
    }
    
    if (q.size() % 2 == 1) {
        return false;
    }
    
    for (int i = 0; i < q.size()/2; i++) {
        if (q[i] != q[q.size()-1-i]) {
            return false;
        }
    }
    
    return sum <= w;
}

int main() {
    assert(will_it_fly({5}, 5) == true);
    return 0;
}