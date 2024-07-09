```cpp
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(float num : lst) {
        if(num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;  
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for(int i=0; i<n; i++) {
        float x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    long long odd_sum = double_the_difference(lst);
    return 0;
}