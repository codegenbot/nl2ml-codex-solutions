map<string, int> num_map = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };

    map<int, string> rev_num_map;
    for (const auto& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    vector<int> sorted_numbers;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        sorted_numbers.push_back(num_map[token]);
    }
    sort(sorted_numbers.begin(), sorted_numbers.end());

    string result;
    for (const int& num : sorted_numbers) {
        result += rev_num_map[num] + " ";
    }
    result.erase(result.size() - 1);
    
    return result;
}