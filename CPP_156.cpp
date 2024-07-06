vector<pair<int, string>> romanNumerals = {{1000, "M"}, {900, "CM"}, {500, "D"},
                                            {400, "CD"}, {100, "C"}, {90, "XC"},
                                            {50, "L"}, {40, "XL"}, {10, "X"},
                                            {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

string int_to_mini_roman(int number) {
    string result;
    for (const auto& numeral : romanNumerals) {
        while (number >= numeral.first) {
            result += numeral.second;
            number -= numeral.first;
        }
    }
    return result;
}