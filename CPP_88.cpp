#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.size() <= 1){
        return array;
    }
    
    int sum = array[0] + array[array.size()-1];
    
    if(sum % 2 == 0){
        std::sort(array.rbegin(), array.rend());
    }
    else{
        std::sort(array.begin(), array.end());
    }
    
    return array;
}

int main(){
    std::vector<int> result = sort_array({21, 14, 23, 11});
    assert(issame(result, {23, 21, 14, 11}));

    return 0;
}