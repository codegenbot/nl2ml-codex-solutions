```cpp
#include <iostream>
#include <vector>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5, 6};
    int result = solutions(lst);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}