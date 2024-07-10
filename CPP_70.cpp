#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            bool isSame = true;
            for(int i = 0; i < lst.size() - 1; i++) {
                if (lst[i] > lst[i + 1]) {
                    isSame = false;
                    break;
                }
            }
            
            if (!isSame) {
                int max_val = *max_element(lst.begin(), lst.end());
                result.push_back(max_val);
                lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
            }
        }
    }
    return result;
}