#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    vector<float> l = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    vector<float>::iterator it = std::max_element(l.begin(), l.end());
    return abs(*it);
}