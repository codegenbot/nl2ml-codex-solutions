string int_to_mini_roman(int number){
        string roman;
        vector<pair<int, string>> romanSymbols = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
                                                  {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
                                                  {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};

        for (const auto &symbol : romanSymbols) {
            while (number >= symbol.first) {
                roman += symbol.second;
                number -= symbol.first;
            }
        }

        return roman;
    }