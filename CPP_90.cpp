#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst){
    if(lst.empty()) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for(int i = 0; i < sorted.size() - 1; i++){
        if(sorted[i] != sorted[i+1]) return sorted[i+1];
    }
    return -1; 
}