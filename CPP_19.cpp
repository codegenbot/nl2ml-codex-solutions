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
    map<int, string> rev_num_map;
    for(auto const& pair : num_map){
        rev_num_map[pair.second] = pair.first;
    }

    vector<int> sorted_nums;
    stringstream ss(numbers);
    string word;
    while(ss >> word){
        sorted_nums.push_back(num_map[word]);
    }

    sort(sorted_nums.begin(), sorted_nums.end());

    string sorted_str;
    for(int num : sorted_nums){
        sorted_str += rev_num_map[num] + " ";
    }

    sorted_str.pop_back(); // remove the trailing space

    return sorted_str;
}