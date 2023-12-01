#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array){
    if(array.size() == 0){
        return array;
    }
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0){
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}

int main() {
    assert (issame(sort_array({21, 14, 23, 11}) , {23, 21, 14, 11}));
    return 0;
}