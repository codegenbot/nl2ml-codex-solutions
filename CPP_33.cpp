#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> sort_third(vector<int> l) {
    vector<int> l_prime = l;
    vector<int> divisible_by_three;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            divisible_by_three.push_back(l[i]);
        }
    }

    sort(divisible_by_three.begin(), divisible_by_three.end());

    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            l_prime[i] = divisible_by_three[j];
            j++;
        }
    }

    return l_prime;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}