#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> v) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    for(int i=0; i<v.size()-1; i++) {
        int left_sum = 0, right_sum = 0;
        for(int j=0; j<i; j++) {
            left_sum += v[j];
        }
        for(int j=i+1; j<v.size(); j++) {
            right_sum += v[j];
        }
        if(abs(left_sum - right_sum) < min_diff) {
            min_diff = abs(left_sum - right_sum);
            cut_index = i;
        }
    }
    vector<int> left(v.begin(), v.begin() + cut_index);
    vector<int> right(v.begin() + cut_index, v.end());
    return make_pair(left, right);
}