#include <vector>
#include <algorithm>

vector<int> sort_vector(vector<int> arr) {
    vector<pair<int, int>> pairs;
    for (int num : arr) {
        int ones = __builtin_popcount(num);
        pairs.push_back({ones, num});
    }
    sort(pairs.begin(), pairs.end());
    return vector<int>(pairs.begin(), pairs.end()).first;
}