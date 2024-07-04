#include <vector>
#include <algorithm>
#include <iostream>

double median(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n/2 - 1] + l[n/2]) / 2.0;
    } else {
        return l[n/2];
    }
}

int main() {
    std::vector<int> numbers;
    int n, num;
    std::cin >> n;  
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        numbers.push_back(num);
    }
    std::cout << median(numbers) << std::endl;
    return 0;
}