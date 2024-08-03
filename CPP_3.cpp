
bool below_zero(const vector<int>& operations) {
    int balance = 0;
    for (int op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}

#include <vector>
#include <cassert>
int main() {
    assert (below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    return 0;
}