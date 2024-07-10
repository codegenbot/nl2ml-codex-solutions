#include <iostream>
#include <vector>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sign *= (arr[i] > 0 ? 1 : (arr[i] < 0 ? -1 : 0));
        sum += std::abs(arr[i]);
    }
    return (sign > 0) ? sum : -sum;
}

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = prod_signs(arr);
    
    std::cout << "The product of signs is: " << result << '\n';
    return 0;
}