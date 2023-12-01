#include <vector>
#include <cassert>

int solutions(std::vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

// Only keep one main() function in the entire program
int main() {
    assert(solutions({3, 13, 2, 9}) == 3);
    // Add more test cases if needed

    return 0;
}