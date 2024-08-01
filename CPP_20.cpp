pair<float, float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair = {numbers[0], numbers[1]};
    float min_diff = abs(numbers[0] - numbers[1]);
    
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < min_diff) {
            min_diff = abs(numbers[i] - numbers[i + 1]);
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    return {closest_pair.first, closest_pair.second};
}