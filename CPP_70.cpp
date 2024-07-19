#include <vector>

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end());
    vector<int> result;
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

int main() {
    vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int> output = strange_sort_list(input);
    for (int num : output) {
        cout << num << " ";
    }
    return 0;
}