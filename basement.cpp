#include <vector>
#include <iostream>
using namespace std;

int basement(const vector<int>& vec) {
    int sum = 0;
    for (size_t i = 0; i < vec.size(); ++i) {
        sum += vec[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}