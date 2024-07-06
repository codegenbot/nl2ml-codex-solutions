#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; ++i) {
        for (int j = 1; j * i <= a; ++j) {
            int k = 1;
            while (i*j*k <= a) {
                if (i * j * k == a) {
                    int prime = true;
                    for (int x = 2; x <= sqrt(a); ++x) {
                        if ((i % x == 0) || (j % x == 0) || (k % x == 0)) {
                            prime = false;
                            break;
                        }
                    }
                    return prime;
                }
                k++;
            }
        }
    }
    return false;
}