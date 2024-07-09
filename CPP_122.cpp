#include <vector>
#include <string>
#include <iostream>
#include <initializer_list>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << "Enter the number of elements to sum: ";
    std::cin >> k;
    int result = add_elements(arr, k);
    std::cout << "Sum of elements: " << result << std::endl;
}