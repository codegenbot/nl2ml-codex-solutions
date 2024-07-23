```
#include <iostream>
#include <vector>

int maximum(std::vector<int>& v, int idx) {
    if(idx >= v.size()) return 0;
    int max_val = v[idx];
    for(int i = idx+1; i<v.size();i++){
        if(v[i] > max_val)
            max_val = v[i];
    }
    return max_val;
}

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if(a.size() != b.size()) 
        return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int testMain()
{
    std::vector<int> vec = {1, 2, 3, -23, 243, -400, 0};
    std::vector<int> emptyVec = std::vector<int>();
    if(issame(emptyVec,vec)) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }
    return 0;
}