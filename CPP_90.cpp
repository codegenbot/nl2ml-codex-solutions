int next_smallest(vector<int> lst) {
    if(lst.size() < 2) return -1; // Return None as per problem description
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < sorted.size(); i++) {
        if(i == 0) continue;
        if(binary_search(sorted.begin(), sorted.end(), sorted[i])) return sorted[i];
    }
    return -1; // Return None as per problem description
}