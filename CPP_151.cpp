long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(num > 0 && num == floor(num) && (int)num % 2 != 0){
            sum += num * num;
        }
    }
    return sum;
}