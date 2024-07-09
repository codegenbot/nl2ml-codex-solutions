```cpp
#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {10, 20, 30, 40, 50};
    int result = solutions(lst);
    std::cout << "The sum of odd numbers is: " << result << std::endl;
    return 0;
}