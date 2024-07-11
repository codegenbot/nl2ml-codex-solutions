map<string, int> num_map = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

string sort_numbers(string numbers){
    map<int, string> rev_map;
    for(auto const& pair : num_map){
        rev_map[pair.second] = pair.first;
    }

    vector<int> sorted_numbers;
    stringstream ss(numbers);
    string word;
    while(ss >> word){
        sorted_numbers.push_back(num_map[word]);
    }

    sort(sorted_numbers.begin(), sorted_numbers.end());

    string result;
    for(int num : sorted_numbers){
        result += rev_map[num] + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}