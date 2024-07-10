#include <initializer_list>
#include <vector>

int solution(std::initializer_list<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst.begin()[i] % 2 != 0) {
            sum += lst.begin()[i];
        }
    }
    return sum;
}
assert (solution({3, 13, 2, 9}) == 3);