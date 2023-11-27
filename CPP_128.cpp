#include <vector>
#include <iostream>

int prod_signs(std::vector<int> arr) {
    if(arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        product *= arr[i] >= 0 ? 1 : -1;
        sum += abs(arr[i]);
    }
    
    return product * sum;
}

int main() {
    int result = prod_signs({-1, 1, 1, 0});
    // Do something with the result (print, store, etc.)
    return 0;
}