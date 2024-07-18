#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), std::vector<int>{}));
    
    return 0;
}