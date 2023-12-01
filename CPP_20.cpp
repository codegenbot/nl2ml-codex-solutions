bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> closest_elements;
    float min_diff = INFINITY;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_elements.clear();
                closest_elements.push_back(min(numbers[i], numbers[j]));
                closest_elements.push_back(max(numbers[i], numbers[j]));
            }
        }
    }
    return closest_elements;
}

int main() {
    // Test the find_closest_elements function
    vector<float> numbers = {1.2, 2.5, 3.8, 4.1};
    vector<float> closest_elements = find_closest_elements(numbers);
    for (int i = 0; i < closest_elements.size(); i++) {
        cout << closest_elements[i] << " ";
    }
    return 0;
}