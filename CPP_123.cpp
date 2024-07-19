#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    std::sort(result.begin(), result.end(), issame);
    return result;
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