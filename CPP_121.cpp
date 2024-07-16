#include <vector>
#include <ostream>

int solution(std::vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int driver() {
    std::cout << solution({3, 13, 2, 9}) << std::endl;
    return 0;
}