#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> unique_digits(vector<int> x) {
    vector<int> result;
    for (int i = 0; i < x.size(); i++) {
        int num = x[i];
        bool hasEvenDigit = false;
        while (num > 0) {
            int digit = num % 10;
            if (digit % 2 == 0) {
                hasEvenDigit = true;
                break;
            }
            num = num / 10;
        }
        if (!hasEvenDigit) {
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}