vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = fabs(numbers[1] - numbers[0]);
    float num1 = numbers[0];
    float num2 = numbers[1];
    for (size_t i = 1; i < numbers.size(); ++i) {
        float diff = fabs(numbers[i] - numbers[i - 1]);
        if (diff < min_diff) {
            min_diff = diff;
            num1 = numbers[i - 1];
            num2 = numbers[i];
        }
    }
    return {num1, num2};
}