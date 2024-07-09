```cpp
bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    bool same = issame(lst1, lst2);
    
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    
    if (same) return sum1 > sum2 ? lst2 : lst1;
    else return (sum1 < sum2) ? lst1 : lst2;
}