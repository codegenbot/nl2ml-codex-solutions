int sum_squares(vector<float> lst){
    int sum = 0;
    for(float num : lst) {
        double ceil_num = ceil(num);
        sum += pow(ceil_num, 2);
    }
    return sum;
}