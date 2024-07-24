#include <vector>
#include <limits>

int main() {
    int prod_signs(vector<int> arr) {
        int product = 1;
        long sum = 0;
        for (int x : arr) {
            if (x == 0) {
                return 0;
            }
            product *= abs(x);
            sum += abs(x);
        }
        return (product * sum > INT_MAX) ? -32768 : product * sum;
    }
    
    int main() {
        vector<int> arr = {1,2,3,4,5};
        cout << prod_signs(arr) << endl;
        return 0;
    }