#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> largest_smallest_integers(vector<int> lst);

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), vector<int>{-3, 1}));
    
    return 0;
}

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for(int num : lst){
        if(num < 0 && num > largest_negative){
            largest_negative = num;
        } else if(num > 0 && num < smallest_positive){
            smallest_positive = num;
        }
    }
    
    result[0] = largest_negative == INT_MIN ? 0 : largest_negative;
    result[1] = smallest_positive == INT_MAX ? 0 : smallest_positive;
    
    return result;
}