int prod_signs(vector<int> arr){
    if(arr.empty()){
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for(int i=0; i<arr.size(); i++){
        product *= arr[i] < 0 ? -1 : (arr[i] > 0 ? 1 : 0);
        sum += abs(arr[i]);
    }
    
    return product * sum;
}