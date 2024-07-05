#include <algorithm>

bool triples_sum_to_zero(vector<int> l) {
    int n = l.size();
    if (n < 3) return false;
    sort(l.begin(), l.end());
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = l[i] + l[left] + l[right];
            if (sum == 0) return true;
            else if (sum < 0) ++left;
            else --right;
        }
    }
    return false;
}