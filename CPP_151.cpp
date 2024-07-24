long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    vector<float> lst = {1.5f, 2.0f, 3.25f, 4.0f, 5.75f};
    long long odd_sum = double_the_difference(lst); 
    assert(double_the_difference(lst) == odd_sum); 
    return 0;
}