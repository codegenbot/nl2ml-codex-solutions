#include <cmath>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; i++) {
        if (i == 1 || i == 9) {
            count += pow(10, n-1);
        } else {
            count += pow(10, n-1) - pow(10, n-2);
        }
    }
    return count;
}