#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_idx = 0;
    
    for (int i = 1; i < v.size(); i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff < min_diff) {
            min_diff = diff;
            cut_idx = i;
        }
    }
    
    vector<int> left(v.begin(), v.begin() + cut_idx);
    vector<int> right(v.begin() + cut_idx, v.end());
    
    return make_pair(left, right);
}