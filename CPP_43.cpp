#include <unordered_set>

bool pairs_sum_to_zero(vector<int> l){
    unordered_set<int> seen;
    
    for (int num : l) {
        if (seen.count(-num) > 0) {
            return true;
        }
        seen.insert(num);
    }
    
    return false;
}