vector<pair<int, string>> romanMap = {
        {1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"},
        {100, "c"}, {90, "xc"}, {50, "l"}, {40, "xl"},
        {10, "x"}, {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}
    };

    string result = "";
    for (auto &rm : romanMap) {
        while (number >= rm.first) {
            result += rm.second;
            number -= rm.first;
        }
    }

    return result;
}