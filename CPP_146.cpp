int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string str = to_string(num);
        int firstDigit = str.front() - '0';
        int lastDigit = str.back() - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}