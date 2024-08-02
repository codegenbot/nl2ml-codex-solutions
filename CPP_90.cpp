Here is the completed code:

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; // Return None
    for (int i = 0; i < sorted.size(); i++) {
        if (i == 0 || sorted[i] != sorted[i-1]) {
            if (i == 1) return sorted[i];
        }
    }
    return -1; // Return None
}