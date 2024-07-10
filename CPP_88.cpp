#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
}

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;
    
    if ((array.front() + array.back()) % 2 == 0)
        sort(array.begin(), array.end(), greater<int>());
    else
        sort(array.begin(), array.end());
    
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}