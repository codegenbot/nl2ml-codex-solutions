Here is the completed code:

int sum_squares(vector<float> lst) {
    int result = 0;
    for (float x : lst) {
        double ceil_x = ceil(x);
        result += pow(ceil_x, 2);
    }
    return result;
}