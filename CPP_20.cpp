bool issame(pair<float, float> a, pair<float, float> b) {
    return a.first == b.first && a.second == b.second;
}

sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
pair<float, float> closest_elements = make_pair(numbers[0], numbers[1]);

for (int i = 1; i < numbers.size() - 1; ++i) {
    if (numbers[i + 1] - numbers[i] < min_diff) {
        min_diff = numbers[i + 1] - numbers[i];
        closest_elements = make_pair(numbers[i], numbers[i + 1]);
    }
}

return {closest_elements.first, closest_elements.second};