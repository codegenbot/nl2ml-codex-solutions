```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    std::vector<float> lst;
    
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;

    for(int i = 0; i < n; ++i) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    long long result = double_the_difference(lst);

    std::cout << "The sum of squares is: " << result << std::endl;

    return 0;
}