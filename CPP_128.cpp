#include <vector>
using namespace std;

int prod_signs(vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num == 0)
            return -32768; // return -32768 for empty array
        product *= (num > 0 ? 1 : -1);
    }
    return product * abs(*max_element(arr.begin(), arr.end()));
}