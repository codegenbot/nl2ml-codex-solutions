#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> vec) {
    int min_diff = INT_MAX;
    int cut_index = -1;
    
    for (int i = 0; i < vec.size() - 1; i++) {
        int left_sum = 0, right_sum = 0;
        
        for (int j = 0; j <= i; j++) {
            left_sum += vec[j];
        }
        
        for (int j = i + 1; j < vec.size(); j++) {
            right_sum += vec[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    vector<int> left_vec, right_vec;
    
    for (int i = 0; i <= cut_index; i++) {
        left_vec.push_back(vec[i]);
    }
    
    for (int i = cut_index + 1; i < vec.size(); i++) {
        right_vec.push_back(vec[i]);
    }
    
    return {left_vec, right_vec};
}