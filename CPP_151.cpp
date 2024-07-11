#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float>& lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum * 2;
}

int main() {
    std::vector<float> lst;
    // Add elements to lst vector as needed

    long long result = double_the_difference(lst);
    // Output the result or do further processing

    return 0;
}