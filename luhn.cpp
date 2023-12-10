```cpp
#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }

    int sum = 0;
    for (int i = n - 2; i >= 0; i -= 2) {
        int doubled = digits[i] * 2;
        if (doubled > 9) {
            doubled -= 9;
        }
        digits[i] = doubled;
    }

    for (int i = 0; i < n; i++) {
        sum += digits[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
```