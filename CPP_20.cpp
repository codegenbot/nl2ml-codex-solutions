bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

pair<float, float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for(int i = 1; i < numbers.size() - 1; ++i){
        if(numbers[i+1] - numbers[i] < min_diff){
            min_diff = numbers[i+1] - numbers[i];
            closest_elements = {numbers[i], numbers[i+1]};
        }
    }
    return closest_elements;
}

issame({2.2, 3.1}, find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}));