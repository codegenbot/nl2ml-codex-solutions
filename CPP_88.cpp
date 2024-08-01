#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array) {
    if (array.empty()) {
        return array;
    }

    int sum = array[0] + array.back();
    vector<int> result = array;

    if (sum % 2 == 1) {
        sort(result.begin(), result.end());
    } else {
        sort(result.rbegin(), result.rend());
    }

    return result;
}