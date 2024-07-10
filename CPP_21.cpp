float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    
    vector<float> rescaled;
    for (float num : numbers) {
        float transformed = (num - min_val) / (max_val - min_val);
        rescaled.push_back(transformed);
    }
    
    return rescaled;
}