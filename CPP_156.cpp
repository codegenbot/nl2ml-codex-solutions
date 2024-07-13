string int_to_mini_roman(int number) {
    vector<pair<int, string>> romans = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                         {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
                                         {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"},
                                         {1, "i"}};
    string roman = "";
    for (const auto &roman_num : romans) {
        while (number >= roman_num.first) {
            number -= roman_num.first;
            roman += roman_num.second;
        }
    }
    return roman;
}