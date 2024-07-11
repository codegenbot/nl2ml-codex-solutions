#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum * 2;
}

int main() {
    std::vector<float> lst = {3.0, 4.0, 5.0, 6.0, 7.0};
    long long result = double_the_difference(lst);
    return 0;
}