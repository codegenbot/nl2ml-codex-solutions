int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            string numStr = to_string(abs(num));
            if(numStr[0] % 2 != 0 && numStr[numStr.size() - 1] % 2 != 0){
                count++;
            }
        }
    }
    return count;
}