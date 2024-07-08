#include <iostream>
#include <vector>
#include <cassert>

bool is_sorted(std::vector<int> lst){
    if (lst.size() <= 1) return true;

    for(int i = 1; i < lst.size(); i++){
        if(lst[i] >= lst[i-1]){
            continue;
        }else{
            int count = 0;
            for(int j = 0; j < lst.size(); j++){
                if(lst[j] == lst[i]) count++;
            }
            return count > 1;
        }
    }

    return true;
}