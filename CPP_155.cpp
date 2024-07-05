#include <iostream>
#include <vector>
#include <cassert>
#include <cmath> // for abs

using namespace std;

vector<int> even_odd_count(int num) {
    int even_count = 0, odd_count = 0;
    num = abs(num); // Handle negative numbers
    if (num == 0) {
        even_count = 1; // Special case for number 0
    } else {
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            num /= 10;
        }
    }
    return {even_count, odd_count};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(123456), {3, 3}));
    assert(issame(even_odd_count(-13579), {0, 5}));
    assert(issame(even_odd_count(24680), {5, 0}));
    cout << "All test cases passed!" << endl;
    return 0;
}