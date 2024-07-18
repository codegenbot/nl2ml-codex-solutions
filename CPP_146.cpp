int specialFilter(const vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            string numStr = to_string(abs(num));
            if (numStr.front() % 2 != 0 && numStr.back() % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}