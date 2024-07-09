#include <vector>
#include <iostream>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your comparison code here
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size() - 1;
    while(left <= right){
        result.push_back(lst[left]);
        if(left != right){
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
}