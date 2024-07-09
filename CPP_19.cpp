#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2},
                                    {"three", 3}, {"four", 4}, {"five", 5},
                                    {"six", 6}, {"seven", 7}, {"eight", 8},
                                    {"nine", 9}};

    vector<string> num_list;
    string temp = "";
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            num_list.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    num_list.push_back(temp);

    sort(num_list.begin(), num_list.end(),
         [&number_map](string a, string b) {
             return number_map[a] < number_map[b]; });

    string result;
    for (auto &num : num_list) {
        result += num + " ";
    }
    return result.substr(0, result.length() - 1);
}