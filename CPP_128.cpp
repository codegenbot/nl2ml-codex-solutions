#include <iostream>
#include <vector>

int prod_signs(int* arr, int n) {
    if (n == 0) return -32768;
    int sign = 1;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sign *= (arr[i] > 0 ? 1 : (arr[i] < 0 ? -1 : 0));
        sum += std::abs(arr[i]);
    }
    return (sign > 0) ? sum : -sum;
}

int main() {
    int n; // number of elements in the array
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = prod_signs(&arr[0], n);
    std::cout << "The product of signs is: " << result << '\n';
    return 0;
}