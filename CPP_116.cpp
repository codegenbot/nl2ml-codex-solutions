#include <vector>
#include <algorithm>

std::vector<int> sort(std::vector<int> arr){
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        int count_a = __builtin_popcount(a);
        int count_b = __builtin_popcount(b);
        if(count_a == count_b){
            return a < b;
        }
        return count_a < count_b;
    });
    return arr;
}

bool issame(std::vector<int> a, std::vector<int> b){
    // Your comparison logic here
}

int main(){
    assert (issame(sort({2,4,8,16,32}) , {2, 4, 8, 16, 32}));
}