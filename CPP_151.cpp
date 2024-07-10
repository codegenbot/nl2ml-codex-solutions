Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // check if number is positive and integer
            if (modf(sqrt(num), &num) != 0.0) { // check if square root of number is not an integer
                sum += pow(num, 2); // add the square of the number to the sum
            }
        }
    }
    return sum;
}