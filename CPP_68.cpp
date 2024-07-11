#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> pluck(vector<int> arr){
    vector<int> result;
    int smallest_value = -1;
    int smallest_index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallest_value == -1 || arr[i] < smallest_value)) {
            smallest_value = arr[i];
            smallest_index = i;
        }
    }

    if (smallest_value != -1) {
        result.push_back(smallest_value);
        result.push_back(smallest_index);
    }

    return result;
}

int main(){
    assert(issame(pluck({7, 9, 7, 1}), {}); return 0;
}