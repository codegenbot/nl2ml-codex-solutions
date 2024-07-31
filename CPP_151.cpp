long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(num > 0 && num == (int)num && (int)num % 2 != 0){
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}