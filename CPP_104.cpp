vector<int> result;
    
    for (int num : x) {
        int temp = num;
        bool hasEvenDigit = false;
        
        while (temp > 0) {
            if ((temp % 10) % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            temp /= 10;
        }
        
        if (!hasEvenDigit) {
            result.push_back(num);
        }
    }
    
    sort(result.begin(), result.end());
    
    return result;
}