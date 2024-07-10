pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = {numbers[0], numbers[1]};
    for(int i = 1; i < numbers.size() - 1; ++i){
        float diff = numbers[i + 1] - numbers[i];
        if(diff < min_diff){
            min_diff = diff;
            closest_elements = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_elements.first, closest_elements.second};
}

bool issame(vector<float> a, vector<float> b){
    return a[0] == b[0] && a[1] == b[1];
}

int main(){
    assert (issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {2.2, 3.1}));
    
    return 0;
}