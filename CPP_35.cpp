#include <algorithm>
#include <vector>

int main() {
    vector<int> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    return *max_element(l.begin(), l.end());
}