#include <bits/stdc++.h>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.5f, 3.4f, -2.2f, 6.8f};
    cout << "The double difference is: " << double_the_difference(lst) << endl;
    return 0;
}