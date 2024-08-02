#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    std::vector<int> result = {1, 3};
    
    // Fixed function signature & comparison in assert
    assert(issame(result, {1, 3}));
    
    return 0;
}