Here is the solution:

int next_smallest(vector<int> lst){
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if(sorted.size() < 2) return -1; // Return None
    return *(sorted.begin()+1);
}