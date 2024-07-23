#include <iostream>
#include <vector>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    while (num != 0) {
        int c = num % 10;
        if (c % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}

int main() {
    assert(even_odd_count(0) == std::vector<int>(1, 0)); 
    return 0;
}