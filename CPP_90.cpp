```cpp
int next_smallest(vector<int>);  

int next_smallest(vector<int> lst) {
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2) return -1; 
    for (int i = 0; i < sorted.size(); i++) {
        if (i == 1) return sorted[i];
    }
}