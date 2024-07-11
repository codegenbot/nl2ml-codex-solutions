Here is the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x:lst){
        if(int(x) > 0 && modf(x,NULL) == 0.0)
            sum += pow(x,2);
    }
    return sum;
}