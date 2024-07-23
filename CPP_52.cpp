#include <vector>
using namespace std;

bool below_threshold(vector<int> l, int t) {
    for (int x : l) {
        if (x >= t) return false;
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    return 0;
}