sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
pair<float, float> closest_elements(numbers[0], numbers[1]);

for (size_t i = 1; i < numbers.size() - 1; ++i) {
    float diff = numbers[i + 1] - numbers[i];
    if (diff < min_diff) {
        min_diff = diff;
        closest_elements.first = numbers[i];
        closest_elements.second = numbers[i + 1];
    }
}

return {closest_elements.first, closest_elements.second};
}