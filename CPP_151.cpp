#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(num > 0 && num == (int)num && (int)num % 2 != 0){
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1, 2.5, 3, 4.0, 5};
    long long odd_sum = double_the_difference(lst);

    return 0;
}