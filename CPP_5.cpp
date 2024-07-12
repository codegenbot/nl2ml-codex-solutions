vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(size_t i = 0; i < numbers.size(); ++i){
        if(i > 0) result.push_back(delimiter);
        result.push_back(numbers[i]);
    }
    return result;
}