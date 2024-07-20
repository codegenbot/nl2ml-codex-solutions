Here's the solution:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && (int)num == (int)(num)) { // ignore negative numbers and non-integers
            if ((int)num % 2 != 0) { // check if the number is odd
                sum += pow((int)num, 2);
            }
        }
    }
    return sum;
}