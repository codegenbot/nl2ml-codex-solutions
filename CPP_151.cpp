long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && int(num) == num) { // Check if number is non-negative and integer
            if (fmod(num, 1.0) > 0.5) { // Check if number is odd
                sum += pow(num, 2); // Calculate square of the number
            }
        }
    }
    return sum;
}