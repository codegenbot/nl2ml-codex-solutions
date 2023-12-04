#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}
