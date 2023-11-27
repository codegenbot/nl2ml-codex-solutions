#include <iostream>
#include <vector>
#include <cassert>

bool my_is_sorted(vector<int> lst){
    if(lst.size() <= 1) {
        return true;
    }
    
    for(int i = 1; i < lst.size(); i++) {
        if(lst[i] <= lst[i-1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert (my_is_sorted({1, 2, 3, 4}) == true);
    
    return 0;
}