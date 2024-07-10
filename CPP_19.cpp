#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        for (int j = i + 1; j <= numbers.length(); j++) {
            if (numbers[j] == ' ') {
                temp = numbers.substr(i, j - i);
                break;
            }
        }
        numVec.push_back(temp);
        i = j;
    }

    sort(numVec.begin(), numVec.end());
    string result = "";
    for (int i = 0; i < numVec.size(); i++) {
        if (i == 0) {
            result += numMap[numVec[i]];
        } else {
            result += " " + numMap[numVec[i]];
        }
    }

    return result;
}