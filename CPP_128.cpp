Here is the completed code:

```cpp
int prod_signs(vector<int> arr){
    if(arr.empty()) return -32768;
    int product = 1;
    for(int num : arr){
        if(num != 0) product *= (num > 0 ? 1 : -1);
    }
    int sum = 0;
    for(int num : arr){
        sum += abs(num);
    }
    return product * sum;
}