#include <vector>
#include <algorithm>

int search(vector<int> lst) {
    int res = -1;
    for (int num : lst) {
        if (num > 0 && count(lst.begin(), lst.end(), num) >= num) {
            res = std::max(res, num);
        }
    }
    return res;
}

int main() {
    // Add test cases here
    return 0;
}