#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
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