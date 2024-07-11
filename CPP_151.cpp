#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && abs(num - lround(num)) < 1e-9) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int calculate_sum(vector<float>& lst, int& odd_sum) {
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    while(1) {
        float num;
        
        cin >> num;
        
        if(to_string(num) == "stop") break;

        if(abs(num - lround(num)) < 1e-9) {
            odd_sum = 0; 
            for (float n : lst) { 
                if (n > 0 && abs(n - lround(n)) < 1e-9) {
                    odd_sum += double_the_difference(lst);
                }
            }
        } else {
            odd_sum += pow(num, 2);
        }
        lst.push_back(num);    
    }

    cout << "Sum of squared values: " << odd_sum << endl;
}

int main() {
    vector<double> lst; 
    int odd_sum = 0;
    calculate_sum(lst, odd_sum);
}