#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total - 1, 0};
    } else {
        return {total, remaining - need};
    }
}