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

string sort_numbers(string numbers) {
    map<int, string> sorted_numbers;
    string result;

    size_t pos = 0;
    while ((pos = numbers.find(" ")) != string::npos) {
        string token = numbers.substr(0, pos);
        sorted_numbers[num_map[token]] = token;
        numbers.erase(0, pos + 1);
    }
    sorted_numbers[num_map[numbers]] = numbers;

    for (const auto& pair : sorted_numbers) {
        result += pair.second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}