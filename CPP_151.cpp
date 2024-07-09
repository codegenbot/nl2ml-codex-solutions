#include <cmath>
#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<float> numbers = {1.0f, 2.0f, 3.0f};
    float odd_sum = 0.0f;
    // Do something with numbers and odd_sum
    assert(double_the_difference(numbers) == odd_sum);  
    return 0;
}