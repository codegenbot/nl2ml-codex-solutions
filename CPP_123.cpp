#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);

    std::vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }

    std::sort(odd_numbers.begin(), odd_numbers.end(), issame);
    return odd_numbers;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> result = get_odd_collatz(n);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}