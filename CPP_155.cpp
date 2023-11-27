vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    int digit;
    
    num = abs(num);
    
    if (num == 0){
        evenCount++;
    }
    else {
        while (num > 0){
            digit = num % 10;
            if (digit % 2 == 0){
                evenCount++;
            }
            else {
                oddCount++;
            }
            num = num / 10;
        }
    }
    
    vector<int> result = {evenCount, oddCount};
    return result;
}