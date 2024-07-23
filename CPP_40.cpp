#include <vector>
#include <algorithm>

using namespace std;

bool triples_sum_to_zero(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        sort(l.begin() + i, l.end());
        for (int j = i + 1; j < l.size(); j++) {
            int target = -(l[i] + l[j]);
            if (binary_search(l.begin(), l.end(), target)) {
                return true;
            }
        }
    }
    return false;
}