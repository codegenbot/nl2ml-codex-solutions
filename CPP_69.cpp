#include<vector>

int search(vector<int> lst){
    int result = -1;
    for (int num : lst) {
        int freq = std::count(lst.begin(), lst.end(), num);
        if (num > 0 && freq >= num && num > result) {
            result = num;
        }
    }
    return result;
}