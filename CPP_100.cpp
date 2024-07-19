#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    
    for (int i = 2; i <= n; ++i) {
        if (n % 2 == 0) {
            n += 1;
        } else {
            n += 2;
        }
        stones.push_back(n);
    }
    
    return stones;
}