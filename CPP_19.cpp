map<string, int> numMap = {
    {"zero", 0},
    {"one", 1},
    {"two", 2},
    {"three", 3},
    {"four", 4},
    {"five", 5},
    {"six", 6},
    {"seven", 7},
    {"eight", 8},
    {"nine", 9}
};

vector<string> sortedNums;
istringstream iss(numbers);
string numStr;
while (iss >> numStr) {
    sortedNums.push_back(numStr);
}

sort(sortedNums.begin(), sortedNums.end(), [&](const string& a, const string& b) {
    return numMap[a] < numMap[b];
});

string result = "";
for (auto& num : sortedNums) {
    result += num + " ";
}

return result.substr(0, result.length() - 1);