#include <vector>
using namespace std;

int can_arrange(vector<int> arr) {
    int idx = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return idx;
}

int main() {
    assert(can_arrange({}) == -1);
    return 0;
}