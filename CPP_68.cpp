#include <iostream>
#include <vector>
#include <climits>

std::vector<int> pluck(std::vector<int> arr){
    std::vector<int> result;
    int smallestValue = INT_MAX;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestValue) {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestIndex != -1) {
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}

int main() {
    std::vector<int> output = pluck({7, 9, 7, 1});
    for (int i = 0; i < output.size(); i++) {
        std::cout << output[i] << " ";
    }
    return 0;
}