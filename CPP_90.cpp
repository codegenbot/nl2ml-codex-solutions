int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; // Return None or -1 in C++ to represent None
    vector<int> v = lst;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        if(v[i] != v[i+1]){
            return v[i+1];
        }
    }
    return -1; // Return -1 if all elements are same
}