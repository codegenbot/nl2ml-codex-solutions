```
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return i;
    }
    return -1;
}

int main(){
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    
    int result = can_arrange(arr);
    
    if(result == -1)
        std::cout << "The array is already in ascending order.\n";
    else
        std::cout << "The first out of order element is at index " << result << ".\n";
    
    return 0;
}