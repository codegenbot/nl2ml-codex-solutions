vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j]) {
                isLeader = false;
                break;
            }
        }
        
        if(isLeader) {
            res.push_back(arr[i]);
        }
    }
    
    reverse(res.begin(), res.end());  
    return res;
}