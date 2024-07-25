#include <vector>
#include <algorithm>

int search(vector<int> lst) {
    int max = 0;
    for (int i : lst) {
        if (i > max && count(lst.begin(), lst.end(), i) >= i) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}