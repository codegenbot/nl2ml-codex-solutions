if (numbers.size() < 2) return numbers;
    
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());
    float range = max_val - min_val;

    for (float &num : numbers) {
        num = (num - min_val) / range;
    }

    return numbers;
}