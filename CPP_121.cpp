```cpp
#include <vector>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {5, 4, 3, 6, 7};
    int result = solution(lst);
    std::cout << "The sum of the odd numbers is: " << result << std::endl;
    return 0;
}