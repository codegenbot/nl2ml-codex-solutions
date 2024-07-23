#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]) return false;
    }
    std::vector<int> unique_lst(lst.begin(), std::unique(lst.begin(), lst.end()));
    for(auto it = unique_lst.begin(); it != unique_lst.end(); ++it)
        *it /= 2; 
    return true; 
}

int processInput(int n, std::vector<int>& vec) {
    if(is_sorted(vec)) {
        std::cout << "The vector is sorted.\n";
    } else {
        std::cout << "The vector is not sorted.\n";
    }
    
    for(int i = 0; i < n; i++) {
        int val;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        vec.push_back(val);
    }
    
    return 0;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> vec;
    
    processInput(n, vec);
    
    return 0;
}