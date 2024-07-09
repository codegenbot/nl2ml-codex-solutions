```cpp
#include <initializer_list>
#include <vector>
#include <cassert>
#include <iostream>

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
    int num, size = 0;
    std::cin >> num;
    std::vector<int> lst;
    while (num != -1) {
        lst.push_back(num);
        std::cin >> num;
        size++;
    }
    assert(solution(lst) == 16); 
    return 0;
}

void runTest() {
    int num, size = 0;
    std::cin >> num;
    std::vector<int> lst;
    while (num != -1) {
        lst.push_back(num);
        std::cin >> num;
        size++;
    }
    assert(solution(lst) == 16); 
    return 0;
}