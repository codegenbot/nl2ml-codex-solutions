#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr,int k){
    int sum = 0;
    for(int i=0; i<k && i<arr.size(); i++){
        if(log10(arr[i]+1) <= 2){ 
            sum += arr[i];
        }
    }
    return sum;
}