#include <algorithm>

vector<int> sort_array(vector<int> array) {
    int sum = array[0] + array[array.size() - 1];
    if (sum % 2 == 1) {
        vector<int> result(array);
        sort(result.begin(), result.end());
        return result;
    } else {
        vector<int> result(array);
        sort(result.begin(), result.end(), greater<int>());
        return result;
    }
}