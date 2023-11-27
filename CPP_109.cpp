bool move_one_ball(vector<int> arr){
    if(arr.empty()) return true;
    
    int n = arr.size();
    int minIndex = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    
    int rightShifts = (n - minIndex) % n;
    for(int i = 0; i < n; i++){
        if(arr[(i + rightShifts) % n] > arr[(i + rightShifts + 1) % n]){
            return false;
        }
    }
    
    return true;
}