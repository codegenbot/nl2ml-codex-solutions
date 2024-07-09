```cpp
#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst) {
    for (int i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; ++i) {
        int x;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }
    
    if(is_sorted(lst)) {
        std::cout << "The list is sorted." << std::endl;
    } else {
        std::cout << "The list is not sorted." << std::endl;
    }
    
    return 0;
}