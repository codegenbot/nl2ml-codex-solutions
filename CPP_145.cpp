bool issame(vector<int> a,vector<int> b){
    if(a==b)
        return true;
    else 
        return false;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num != 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }
    
    sort(pairs.begin(), pairs.end());
    
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        result.push_back(nums[pairs[i].second]);
    }
    
    return result;
}

int main() {
    assert (issame(vector<int>(order_by_points({0,6,6,-76,-21,23,4}) ), vector<int>({-76, -21, 0, 4, 23, 6, 6})));
}