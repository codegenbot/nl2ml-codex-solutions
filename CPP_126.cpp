#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 0; i < (lst.size() - 1); i++){
        if(lst[i] >= lst[i+1]){
            std::vector<int>::iterator it = std::unique(lst.begin(), lst.end());
            lst.erase(it, lst.end());
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> lst;
    for(int i = 0; i < n; i++){
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        lst.push_back(temp);
    }

    if(is_sorted(lst)){
        std::cout << "The list is sorted." << std::endl;
    }
    else{
        std::cout << "The list is not sorted." << std::endl;
    }

    return 0;
}