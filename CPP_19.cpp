map<string, int> number_map = {
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

vector<string> words;
stringstream ss(numbers);
string word;
while (ss >> word) {
    words.push_back(word);
}

sort(words.begin(), words.end(), [&](const string &a, const string &b) {
    return number_map[a] < number_map[b];
});

string result;
for (const string &w : words) {
    result += w + " ";
}

return result.substr(0, result.size() - 1);
}