string int_to_mini_roman(int number) {
    vector< pair<int, string> > romanNums = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},
                                            {100,"C"},{90,"XC"},{50,"L"},{40,"XL"},
                                            {10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    string romanNum = "";
    for (const auto &pair:romanNums) {
        while (number >= pair.first) {
            romanNum += pair.second;
            number -= pair.first;
        }
    }
    return romanNum;
}