bool move_one_ball(vector<int> arr) {
    int n = arr.size();
    if(n == 0) return true;
    
    for(int i = 1; i < n; i++) {
        if(arr[i] >= arr[i - 1]) continue;
        else break;
    }
    
    return true;
}