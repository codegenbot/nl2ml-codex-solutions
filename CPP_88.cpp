```cpp
#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a,std::vector<int>b){
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = 0;
    for(auto x : array){
        sum += x;
    }
    if (sum % 2 == 1) {
        std::sort(array.begin(), array.end());
    } else {
        std::sort(array.begin(), array.end(), std::greater<int>());
    }
    return array;
}

int main() {
    assert(std::is_same(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}