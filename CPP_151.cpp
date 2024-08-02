#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && int(x) == x) { 
            if (int(x) % 2 != 0) { 
                sum += pow(int(x), 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.7, 4.8, 2.9};
    long long result = double_the_difference(lst);
    std::cout << "The difference is: " << result << std::endl;
    return 0;
}