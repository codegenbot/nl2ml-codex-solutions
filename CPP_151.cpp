#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.5, 3.0}; 
    long long odd_sum = 0; 
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}