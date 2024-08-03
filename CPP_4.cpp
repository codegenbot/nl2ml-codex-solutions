float mean_absolute_deviation(vector<float> numbers) {
    float sum = 0.0; // initialize sum to zero
    for (int i = 0; i < numbers.size(); i++) {
        sum += abs(numbers[i] - mean(numbers));
    }
    return sum / numbers.size();
}

float mean(vector<float> numbers) {
    return accumulate(numbers.begin(), numbers.end(), 0.0f) / numbers.size();
}