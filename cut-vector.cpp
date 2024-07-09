pair<vector<int>, vector<int>> cutVector(vector<int>& v) {
    int minDiff = INT_MAX;  
    pair<vector<int>, vector<int>> result;
    
    if (v.size() == 1) {  
        return make_pair(v, v);
    }
    
    for(int i = 1; i < v.size(); i++) {
        int leftSum = 0, rightSum = 0;
        
        for(int j = 0; j < i; j++) {
            leftSum += v[j];
        }
        
        for(int j = i; j < v.size(); j++) {
            rightSum += v[j];
        }
        
        int diff = abs(leftSum - rightSum);
        
        if(diff < minDiff) {
            minDiff = diff;
            result = {vector<int>(v.begin(), v.begin() + i), vector<int>(v.begin() + i, v.end())};
        }
    }
    
    return result;
}