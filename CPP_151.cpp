Here's the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // Check if number is positive and integer
            sum += pow(num, 2); // Calculate square of the number
        }
    }
    return sum;
}