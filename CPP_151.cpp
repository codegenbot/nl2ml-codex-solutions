Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(num >= 0 && (int)num == (int)round(num)){
            sum += pow((int)num, 2);
        }
    }
    return sum;
}