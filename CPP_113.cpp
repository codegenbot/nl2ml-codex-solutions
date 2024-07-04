#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> odd_count(const vector<string>& lst) {
    vector<string> result;
    for (const auto& str : lst) {
        int odd_count = 0;
        for (char ch : str) {
            if (isdigit(ch) && (ch - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + 
                     " in the string " + str + 
                     " of the input.";
        result.push_back(res);
    }
    return result;
}

int main() {
    vector<string> expected = {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 3 in the string 137 of the input.",
        "the number of odd elements 2 in the string 314 of the input."
    };
    assert(odd_count({"271", "137", "314"}) == expected);

    vector<string> input;
    string str;
    while (cin >> str) {
        input.push_back(str);
    }

    vector<string> output = odd_count(input);
    for (const auto& line : output) {
        cout << line << endl;
    }

    return 0;
}