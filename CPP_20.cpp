vector<float> find_closest_elements(vector<float> numbers){
    float minDiff = INFINITY;
    int index1, index2;
    
    for(int i = 0; i < numbers.size() - 1; i++){
        for(int j = i + 1; j < numbers.size(); j++){
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < minDiff){
                minDiff = diff;
                index1 = i;
                index2 = j;
            }
        }
    }
    
    vector<float> result;
    result.push_back(numbers[index1]);
    result.push_back(numbers[index2]);
    
    return result;
}