#include <iostream>
#include <vector>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                odd_sum += pow(num, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    vector<float> lst;  
    long long odd_sum;   
    int result = double_the_difference(lst);
    cout << result << endl;
}