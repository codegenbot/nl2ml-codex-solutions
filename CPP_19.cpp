map<string, int> number_map = {
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
    map<int, string> reverse_map;
    string result;
    string temp;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            reverse_map[number_map[temp]] = temp;
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    reverse_map[number_map[temp]] = temp;
    for (auto const& [key, val] : reverse_map) {
        result += val + " ";
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}