```cpp
long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;

}

int main() {
    float num;
    
    cout << "Enter numbers (enter 'stop' to finish):" << endl;
    vector<float> lst; 
    int odd_sum = 0;
    
    while(1) {
        cin >> num;
        
        if(std::to_string(num) == "stop") break;

        if(num > 0 && modf(num, &num) == 0.0) {
            long long sum = double_the_difference(lst);
            odd_sum = sum;
        }
        lst.push_back(num);    
    }

    cout << "Sum of squared values: " << odd_sum << endl;
}