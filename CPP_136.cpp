#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> largest_smallest_integer(vector<int> lst){
    int max_neg = INT_MIN, min_pos = INT_MAX;
    for (int num : lst) {
        if (num < 0 && num > max_neg) {
            max_neg = num;
        } else if (num > 0 && num < min_pos) {
            min_pos = num;
        }
    }
    return {max_neg, min_pos};
}

int main(){
    assert(issame(largest_smallest_integer({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}