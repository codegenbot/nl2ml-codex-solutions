int result = -1;
    for (int num : lst) {
        if (num <= 0) continue;
        
        int frequency = 0;
        for (int n : lst) {
            if (n == num) {
                frequency++;
            }
        }
        
        if (frequency >= num && num > result) {
            result = num;
        }
    }
    
    return result;
}