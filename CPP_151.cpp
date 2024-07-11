```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fixed(num) % 1 == 0.0f) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<float> lst; 
    int odd_sum = 0;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        float num;
        
        cin >> num;
        
        if(to_string(num) == "stop") break;

        if(num > 0 && fixed(num) % 1 == 0.0f) {
            odd_sum = 0; 
            for (float n : lst) { 
                if (n > 0 && fixed(n) % 1 == 0.0f) {
                    odd_sum += double_the_difference(lst);
                }
            }
        }
        lst.push_back(num);    
    }

    cout << "Sum of squared values: " << odd_sum << endl;
}