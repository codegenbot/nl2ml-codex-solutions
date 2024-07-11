```cpp
int main() {
    vector<float> lst;
    long long odd_sum = 0; 

    cin >> dll;
    for(float &num : lst) {
        cin >> num;
    }
    cout << double_the_difference(lst);
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}