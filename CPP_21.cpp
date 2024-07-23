float min_num = *min_element(numbers.begin(), numbers.end());
    float max_num = *max_element(numbers.begin(), numbers.end());
    
    vector<float> result;
    
    for (float num : numbers) {
        result.push_back((num - min_num) / (max_num - min_num));
    }
    
    return result;
}