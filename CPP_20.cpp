bool issame(float a, float b) {
    return fabs(a - b) < numeric_limits<float>::epsilon();
}

pair<float, float> find_closest_elements(vector<float>& numbers);

pair<float, float> find_closest_elements(vector<float>& numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    float num1 = numbers[0], num2 = numbers[1];
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            num1 = numbers[i];
            num2 = numbers[i + 1];
        } else if (issame(numbers[i + 1] - numbers[i], min_diff)) {
            if (numbers[i] < num1) {
                num1 = numbers[i];
                num2 = numbers[i + 1];
            }
        }
    }
    return {num1, num2};
}