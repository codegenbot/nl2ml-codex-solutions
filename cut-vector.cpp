#include <pair>

std::pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int n = v.size();
    long long total_sum = accumulate(v.begin(), v.end(), 0LL);
    
    std::pair<long long, long long> prefix_sum = {{0LL}, {accumulate(v.begin(), v.end(), 0LL)}};
    
    int min_diff = INT_MAX;
    vector<int> left, right;
    
    for (int i = 0; i < n; ++i) {
        if (prefix_sum.second - prefix_sum.first >= total_sum / 2) {
            min_diff = min(min_diff, abs(total_sum - 2 * prefix_sum.second));
            left = {v.begin(), v.begin() + i};
            right = {v.end() - (n - i - 1), v.end()};
        }
    }
    
    return {left, right};
}