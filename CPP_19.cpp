#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

std::string sort_numbers(std::string numbers) {
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
            if (j == numbers.length() || numbers[j] == ' ') {
                temp = numbers.substr(i, j - i);
                numVec.push_back(temp);
                i = j;
                break;
            }
        }
    }

    sort(numVec.begin(), numVec.end(), [&numMap](string a, string b) {
        return to_string(numMap[a]) < to_string(numMap[b]);
    });

    std::string result;
    for (auto &num : numVec) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}