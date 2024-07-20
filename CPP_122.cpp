#include <vector>
#include <cmath>

int add_elements(std::vector<int> arr, int k){
    int sum = 0;
    for(int i=0; i<k; i++){
        if(log10(arr[i]+1) <= 2) sum += arr[i];
    }
    return sum;
}

int main(){
    std::vector<int> arr;
    int k;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    for(int i=0; i<k; i++){
        std::cout << "Enter element " << (i+1) << ": ";
        int temp;
        std::cin >> temp;
        arr.push_back(temp);
    }
    std::cout << "Sum of elements: " << add_elements(arr, k) << std::endl;
    return 0;
}