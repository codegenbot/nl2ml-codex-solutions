Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && modf(num, &num) == 0) { // Check if number is non-negative integer
            if (fmod(num, 2.0) != 0.0) { // Check if number is odd
                sum += pow(num, 2); // Add square of the odd number to the sum
            }
        }
    }
    return sum;
}