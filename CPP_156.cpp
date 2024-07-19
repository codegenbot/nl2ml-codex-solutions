string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman_numerals = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                                 {100, "c"}, {90, "cx"}, {50, "l"}, {40, "xl"},
                                                 {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};
    string roman = "";
    
    for (const auto& numeral : roman_numerals) {
        while (number >= numeral.first) {
            number -= numeral.first;
            roman += numeral.second;
        }
    }
    
    return roman;
}