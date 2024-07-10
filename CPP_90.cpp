Here is the solution:

int next_smallest(vector<int> lst){
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    
    if (sorted.size() < 2) {
        return -1; // or any other value that represents None
    }
    
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i+1]) {
            return sorted[i+1];
        }
    }
    
    return -1; // or any other value that represents None
}