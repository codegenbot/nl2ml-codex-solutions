#include <string>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        while (i + 1 <= numbers.length() && !ispunct(numbers[i])) {
            temp += numbers[i];
            i++;
        }
        if (!numMap.count(temp)) {
            return "Invalid input";
        }
        numVec.push_back(temp);
        temp = "";
    }

    sort(numVec.begin(), numVec.end());
    string result;
    for (const auto& num : numVec) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}