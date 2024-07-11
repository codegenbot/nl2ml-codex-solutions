#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    issame({4, 3, 2, 8}, {});
    return 0;
}