long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst) {
        if (int(x) > 0 && int(x) == round(x)) { // checking if number is odd and integer
            sum += pow(int(x), 2);
        }
    }
    return sum;
}