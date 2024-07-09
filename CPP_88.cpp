#include <algorithm>

vector<int> sort_array(vector<int> array) {
    if (array.empty()) return array;

    int sum = array[0] + array.back();
    vector<int> result = array;
    
    if (sum % 2 == 1)
        std::sort(result.begin(), result.end());
    else
        std::sort(result.begin(), result.end(), std::greater<int>());
    
    return result;
}