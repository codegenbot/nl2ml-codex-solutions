Here is the solution:

int next_smallest(vector<int> lst){
    vector<int> v(lst);
    sort(v.begin(), v.end());
    if(v.size() < 2) return -1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] != v[0]){
            return v[i];
        }
    }
    return -1;
}