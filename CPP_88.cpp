#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>

bool std::vector<int>::issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        std::sort(array.begin(), array.end(), std::greater<int>());
    else
        std::sort(array.begin(), array.end());
    return array;
}