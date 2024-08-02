#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            sum += pow(x, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    long long odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum );
}