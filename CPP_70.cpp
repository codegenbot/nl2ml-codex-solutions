#include <vector>

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
    int left = 0, right = lst.size() - 1;
    while (left <= right) {
        result.push_back(lst[left]);
        if (left != right && lst[left] != lst[right]) {
            result.push_back(lst[right]);
        }
        left++;
        right--;
    }
    return result;
}

int main(){
    // Main function code here
    return 0;
}