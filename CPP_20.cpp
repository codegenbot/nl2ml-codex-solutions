sort(numbers.begin(), numbers.end());
float min_diff = numbers[1] - numbers[0];
int min_index = 0;
for (int i = 1; i < numbers.size() - 1; ++i) {
    float diff = numbers[i + 1] - numbers[i];
    if (diff < min_diff) {
        min_diff = diff;
        min_index = i;
    }
}
return {numbers[min_index], numbers[min_index + 1]};