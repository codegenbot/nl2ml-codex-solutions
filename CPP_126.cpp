#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst);

int main() {
    std::vector<int> lst;
    int num;

    // Read input from user
    while (std::cin >> num) {
        lst.push_back(num);
    }

    if (is_sorted(lst)) {
        std::cout << "The list is sorted." << std::endl;
    } else {
        std::cout << "The list is not sorted." << std::endl;
    }

    return 0;
}

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int>::iterator it = unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return false;
        }
    }
    return true;
}