#include <cmath>

bool is_multiply_prime(int a) {
    for (int i = 2; i <= sqrt(a); i++) {
        int count = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 0) {
            for (int k = i; k <= a / i; k++) {
                int temp = k * i;
                count = 0;
                for (int j = 2; j <= temp / 2; j++) {
                    if (temp % j == 0)
                        count++;
                }
                if (count == 0 && temp == a) {
                    return true;
                }
            }
        }
    }
    return false;
}