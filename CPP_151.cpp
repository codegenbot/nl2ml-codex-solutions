Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &intPart) == 0.0)
            sum += pow(intPart, 2);
    }
    return sum;