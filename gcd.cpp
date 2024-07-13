int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

vector<int> findIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int m = text.size();
    int n = target.size();
    
    for (int i = 0; i <= m - n; ++i) {
        int j;
        for (j = 0; j < n; ++j) {
            if (text[i + j] != target[j])
                break;
        }
        if (j == n)
            indices.push_back(i);
    }
    
    return indices;
}