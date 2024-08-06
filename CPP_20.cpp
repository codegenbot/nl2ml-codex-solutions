bool issame(float a, float b) {
    return fabs(a - b) < numeric_limits<float>::epsilon();
}

pair<float, float> find_closest_elements(vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> closest_elements = make_pair(numbers[0], numbers[1]);

    for (int i = 1; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff || (diff == min_diff && issame(numbers[i], closest_elements.first))) {
            min_diff = diff;
            closest_elements = make_pair(numbers[i], numbers[i + 1]);
        }
    }

    return closest_elements;
}