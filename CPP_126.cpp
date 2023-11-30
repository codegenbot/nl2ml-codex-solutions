#include <vector>

bool is_sorted(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] == lst[i+1]){
            return false;
        }
    }
    
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] > lst[i+1]){
            return false;
        }
    }
    
    return true;
}