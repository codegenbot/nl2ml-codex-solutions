#include <vector>
using namespace std;

bool below_threshold(vector<int> l, int t) {
    for (int x : l) {
        if (x >= t) {
            return false;
        }
    }
    return true;
}