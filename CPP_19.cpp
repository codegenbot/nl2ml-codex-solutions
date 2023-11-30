string sort_numbers(string numbers){
    map<string, int> numberMap;
    numberMap["zero"] = 0;
    numberMap["one"] = 1;
    numberMap["two"] = 2;
    numberMap["three"] = 3;
    numberMap["four"] = 4;
    numberMap["five"] = 5;
    numberMap["six"] = 6;
    numberMap["seven"] = 7;
    numberMap["eight"] = 8;
    numberMap["nine"] = 9;

    vector<int> numberList;
    stringstream ss(numbers);
    string number;
    while (ss >> number) {
        numberList.push_back(numberMap[number]);
    }

    sort(numberList.begin(), numberList.end());

    string sortedNumbers;
    for (int i = 0; i < numberList.size(); i++) {
        for (auto it = numberMap.begin(); it != numberMap.end(); ++it) {
            if (it->second == numberList[i]) {
                sortedNumbers += it->first + " ";
                break;
            }
        }
    }

    return sortedNumbers;
}