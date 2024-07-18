#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main(){
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}