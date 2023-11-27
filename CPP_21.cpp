vector<float> rescale_to_unit(vector<float> numbers){
    float min_num = numbers[0];
    float max_num = numbers[0];
    
    // find the minimum and maximum numbers in the vector
    for(int i=1; i<numbers.size(); i++){
        if(numbers[i] < min_num){
            min_num = numbers[i];
        }
        if(numbers[i] > max_num){
            max_num = numbers[i];
        }
    }
    
    // apply linear transform to rescale the vector
    float range = max_num - min_num;
    for(int i=0; i<numbers.size(); i++){
        numbers[i] = (numbers[i] - min_num) / range;
    }
    
    return numbers;
}