#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {{1000, "m"}, {900, "cm"}, {500, "d"}, {400, "cd"}, {100, "c"},
                                       {90, "xc"}, {50, "l"}, {40, "xl"}, {10, "x"}, {9, "ix"},
                                       {5, "v"}, {4, "iv"}, {1, "i"}};
    string result = "";
    for (auto &r : roman) {
        while (number >= r.first) {
            result += r.second;
            number -= r.first;
        }
    }
    return result;
}