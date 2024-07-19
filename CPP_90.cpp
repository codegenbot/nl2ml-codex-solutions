#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size(); i++) {
        if (i == 0 || sorted[i] != sorted[i-1]) {
            if (i+1 < sorted.size() && sorted[i] == sorted[i+1]) {
                return -1; 
            } else {
                for (int j = 0; j < lst.size(); j++) {
                    if (lst[j] == sorted[i]) {
                        return lst[j];
                    }
                }
            }
        }
    }
    return -1; 
}