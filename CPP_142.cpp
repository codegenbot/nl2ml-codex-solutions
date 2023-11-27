#include <iostream>
#include <vector>

using std::vector;

int sum_squares(vector<int> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 3 == 0) {
            lst[i] = lst[i] * lst[i];
        } else if (i % 4 == 0) {
            lst[i] = lst[i] * lst[i] * lst[i];
        }
        sum += lst[i];
    }
    return sum;
}

int main() {
    vector<int> input = {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 14, -14, 6, 13, 11, 16, 16, 4, 10};
    int result = sum_squares(input);
    std::cout << result << std::endl;

    return 0;
}