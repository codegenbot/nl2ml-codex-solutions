#include <algorithm>
#include <string>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numberMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                   {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                   {"eight", 8}, {"nine", 9}};
    vector<string> numVector;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (auto &pair : numberMap) {
            if (numbers.substr(i, pair.first.length()).compare(pair.first) == 0) {
                temp = pair.first;
                i += pair.first.length() - 1;
                break;
            }
        }
        numVector.push_back(temp);
    }

    sort(numVector.begin(), numVector.end());

    string result = "";
    for (auto &num : numVector) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}