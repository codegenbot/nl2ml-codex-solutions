#include <vector>
#include <cassert>

int sumOdds(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(sumOdds({3, 13, 2, 9}) == 16);
    return 0;
}