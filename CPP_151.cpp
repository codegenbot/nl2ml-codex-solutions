```cpp
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
    vector<float> lst = {1.5, 2.3, 4.0, -3.7, 6.0};
    float odd_sum;
    
    long long double result = double_the_difference(lst);
    cout << "The difference is: " << result << endl;

    return 0;
}