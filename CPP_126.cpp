#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst){
    for(int i = 0; i < (lst.size() - 1); i++){
        if(lst[i] >= lst[i+1]){
            return false;
            break;
        }
    }
    return true;
}