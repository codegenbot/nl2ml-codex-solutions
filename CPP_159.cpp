#include <vector>
#include <cassert>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? totalCarrots - remaining : totalCarrots;
    int leftCarrots = remaining > totalCarrots ? 0 : remaining - totalCarrots;

    return {eatenCarrots, leftCarrots};
}

int main() {
    assert(isSame(eat(4, 5, 1), {5, 0}));
    return 0;
}