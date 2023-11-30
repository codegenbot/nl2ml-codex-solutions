vector<int> order_by_points(vector<int> nums){
    vector<int> result = nums;
    sort(result.begin(), result.end(), [](int a, int b){
        int sumA = 0, sumB = 0;
        string strA = to_string(abs(a));
        string strB = to_string(abs(b));
        
        for(char c : strA){
            sumA += c - '0';
        }
        
        for(char c : strB){
            sumB += c - '0';
        }
        
        if(sumA == sumB){
            return a < b;
        }
        
        return sumA < sumB;
    });
    
    return result;
}