#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> sort_third(vector<int> l) {
    vector<int> result = l;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sort(result.begin() + i, result.begin() + i + 3);
        }
    }
    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}