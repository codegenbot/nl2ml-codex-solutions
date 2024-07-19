#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

long long doubleTheDifference(vector<int> lst) {
    long long pos_sum = 0, neg_sum = 0;
    for (int n : lst) {
        if (n > 0) {
            pos_sum += n;
        } else if (n < 0) {
            neg_sum -= n;
        }
    }
    return abs(pos_sum - neg_sum);
}

int main() { 
    vector<int> lst;
    int num;
    cout << "Enter numbers (enter 'stop' to finish): ";
    while (true) {
        cin >> num; 
        if (!cin) break;
        lst.push_back(num);
    }
    long long result = doubleTheDifference(lst);
    cout << "Double the difference: " << result << endl;
    return 0;
}