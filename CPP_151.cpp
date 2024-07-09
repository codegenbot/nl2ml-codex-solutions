#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float odd_sum = 0; 
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        float num;
        cin >> num;
        lst.push_back(num);
    }
    odd_sum = double_the_difference(lst);
    cout << "The sum is: " << odd_sum << endl;
    return 0;
}