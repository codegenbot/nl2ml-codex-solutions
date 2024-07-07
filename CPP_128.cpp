#include <vector>

int prod_signs(std::vector<int> arr) {
    int product = 1;
    long long sum = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }
    
    return sum * product < 0 ? -32768 : sum * product;
}