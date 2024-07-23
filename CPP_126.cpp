```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
    }
    return true;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> vec;
    
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        vec.push_back(val);
    }
    
    if(is_sorted(vec)) {
        std::cout << "The vector is sorted.\n";
    } else {
        std::cout << "The vector is not sorted.\n";
    }
}