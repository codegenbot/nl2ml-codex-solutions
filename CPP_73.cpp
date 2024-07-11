int smallest_change(vector<int> arr) {
    int n = arr.size();
    string s = "";
    for (int i : arr) {
        s += to_string(i);
    }
    
    int left = 0, right = s.length() - 1;
    int changes = 0;
    
    while (left < right) {
        if (s[left] != s[right]) {
            ++changes;
            for (; left < right; ++left) {
                if (s[left] == s[right])
                    break;
                ++changes;
            }
            left++;
        } else
            left++, right--;
    }
    
    return changes;
}