#include <iostream>
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lst[i];
    }
    std::cout << solution(lst) << std::endl;
    return 0;
}