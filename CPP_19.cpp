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
    string result = "";
    map<int, string> sorted_numbers;
    size_t start = 0, end = 0;

    while ((end = numbers.find(" ", start)) != string::npos) {
        string num_str = numbers.substr(start, end - start);
        sorted_numbers[num_map[num_str]] = num_str;
        start = end + 1;
    }

    string num_str = numbers.substr(start);
    sorted_numbers[num_map[num_str]] = num_str;

    for (const auto& num : sorted_numbers) {
        result += num.second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}