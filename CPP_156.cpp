string int_to_mini_roman(int number) {
    const vector<pair<int, string>> romanMap = {{1000, "m"}, {900, "cm"}, {500, "d"},
                                                 {400, "cd"}, {100, "c"}, {90, "cx"},
                                                 {50, "l"}, {40, "xl"}, {10, "x"},
                                                 {9, "ix"}, {5, "v"}, {4, "iv"},
                                                 {1, "i"}};
    string result = "";
    
    for (const auto& pair : romanMap) {
        while (number >= pair.first) {
            number -= pair.first;
            result += to_string(pair.second[0]).convert_to_lower();
        }
    }
    
    return result;
}