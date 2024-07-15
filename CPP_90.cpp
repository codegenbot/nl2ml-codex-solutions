int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None in Python term
    
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    for (int i = 1; i < sorted.size(); i++) {
        if (sorted[i] != sorted[0]) {
            auto it = find(lst.begin(), lst.end(), sorted[i]);
            return *it;
        }
    }
    
    return -1; // Return None in Python term
}