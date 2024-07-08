#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst){
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int left = 0, right = lst.size()-1;
    while(left <= right){
        result.push_back(lst[left]);
        if(left != right)
            result.push_back(lst[right]);
        left++;
        right--;
    }
    return result;
}

int main(){
    std::vector<int> input = {4, 2, 8, 3, 1, 6, 9};
    std::vector<int> expected = {1, 9, 2, 8, 3, 6, 4};

    std::vector<int> output = strange_sort_list(input);
    
    assert(issame(output, expected));

    return 0;
}