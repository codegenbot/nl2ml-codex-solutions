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
    string result = "";
    map<int, string> reverse_map;
    string temp = "";
    
    for (char c : numbers) {
        if (c != ' ') {
            temp += c;
        } else {
            reverse_map[number_map[temp]] = temp;
            temp = "";
        }
    }
    reverse_map[number_map[temp]] = temp;

    for (auto it = reverse_map.begin(); it != reverse_map.end(); ++it) {
        result += it->second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}