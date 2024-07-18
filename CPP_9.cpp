vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        int max_num = numbers[i];
        for (int j = 0; j < i; ++j) {
            max_num = max(max_num, numbers[j]);
        }
        result.push_back(max_num);
    }
    return result;
}