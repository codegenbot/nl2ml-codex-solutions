map<string, int> numMap = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numVec.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }

    numVec.push_back(temp);

    sort(numVec.begin(), numVec.end());

    string result = "";
    for (int i = 0; i < numVec.size(); i++) {
        result += numMap.find(numVec[i])->second;
        if (i < numVec.size() - 1) {
            result += " ";
        }
    }

    return result;
}