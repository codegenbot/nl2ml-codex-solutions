#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::vector<int> result;
    std::sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while(left <= right){
        if(left == right){
            result.push_back(lst[left]);
        } else {
            result.push_back(lst[left]);
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main() {
    assert(issame(strange_sort_list({111111}), {111111}));
    return 0;
}