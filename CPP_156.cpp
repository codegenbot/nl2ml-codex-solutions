string int_to_mini_roman(int number) {
    vector< pair<int, string> > romanValues = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string roman = "";
    for (int i = 0; i < romanValues.size(); ++i) {
        while (number >= romanValues[i].first) {
            number -= romanValues[i].first;
            roman += romanValues[i].second;
        }
    }

    return roman;
}