vector<int> remove_duplicates(vector<int>& numbers) {
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}