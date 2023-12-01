#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5, 2.5, 3.5, 4.0, 5.0};

    long long odd_sum = double_the_difference(lst);
    
    assert(double_the_difference(lst) == odd_sum);

    return 0;
}