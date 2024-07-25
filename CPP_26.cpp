vector<int> remove_duplicates(const vector<int>& numbers) {
    vector<int> unique_numbers;
    for (int num : numbers) {
        if (count(numbers.begin(), numbers.end(), num) == 1) {
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}