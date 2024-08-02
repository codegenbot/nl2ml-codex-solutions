#include <vector>

bool below_zero(const vector<int>& operations) {
    int balance = 0;
    for (const int& op : operations) {
        balance += op;
        if (balance < 0) {
            return true;
        }
    }
    return false;
}