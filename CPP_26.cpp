bool issame(int a, int b) {
    return a == b;
}

vector<int> remove_duplicates(vector<int>& numbers) {
    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end(), issame), numbers.end());
    return numbers;
}