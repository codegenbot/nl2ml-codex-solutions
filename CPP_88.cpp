#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    int first = array.front();
    int last = array.back();
    vector<int> sorted_array = array;

    if ((first + last) % 2 == 0) {
        sort(sorted_array.begin(), sorted_array.end(), greater<int>());
    } else {
        sort(sorted_array.begin(), sorted_array.end());
    }

    return sorted_array;
}

int main() {
    assert((sort_array({21, 14, 23, 11}) == vector<int>{23, 21, 14, 11}));
    assert((sort_array({11, 14, 21, 23}) == vector<int}{11, 14, 21, 23}));
    return 0;
}