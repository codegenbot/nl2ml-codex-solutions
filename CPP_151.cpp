```cpp
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst;  
    long long odd_sum = double_the_difference(lst);
    cout << "The difference is: " << odd_sum << endl;
    assert(odd_sum == 0);
    return 0;
}