#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> strange_sort_list(vector<int> lst);

int main() {
    // Your main function implementation here
}

bool issame(vector<int> a, vector<int> b){
    // Your issame function implementation here
}

vector<int> strange_sort_list(vector<int> lst){
    vector<int> result;
    sort(lst.begin(), lst.end());
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}