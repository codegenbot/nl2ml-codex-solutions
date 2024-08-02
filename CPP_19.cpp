#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        } else {
            while (i < numbers.length() && !ispunct(numbers[i])) {
                temp += numbers[i];
                i++;
            }
            numVec.push_back(temp);
            temp = "";
        }
    }

    sort(numVec.begin(), numVec.end());
    string result;

    for (auto &num : numVec) {
        if (!result.empty()) {
            result += " ";
        }
        for (const auto &pair : numMap) {
            if (pair.first == num) {
                result += pair.first;
                break;
            }
        }
    }

    return result;
}