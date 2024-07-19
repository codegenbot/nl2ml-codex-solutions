vector<int> rolling_max(vector<int> numbers) {
    vector<int> result;
    int n = numbers.size();
    if (n == 0) return result;
    
    int maxSoFar = numbers[0];
    result.push_back(maxSoFar);
    
    for (int i = 1; i < n; ++i) {
        maxSoFar = max(maxSoFar, numbers[i]);
        result.push_back(maxSoFar);
    }
    
    return result;
}