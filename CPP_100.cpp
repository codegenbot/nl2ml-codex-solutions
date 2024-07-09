#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    stones.push_back(n);
    for(int i=1; i<n; ++i){
        if(n%2 == 0){
            n += 2;
        }
        else{
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}