#include<vector>
#include<string>

using namespace std;

string int_to_mini_roman(int number) {
    vector<pair<int, string>> roman = {{1000, "m"}, {900, "cm"}, {500, "d"},
                                        {400, "cd"}, {100, "c"}, {90, "cx"},
                                        {50, "l"}, {40, "xl"}, {10, "x"},
                                        {9, "ix"}, {5, "v"}, {4, "iv"}, {1, "i"}};
    string result;
    
    for (const auto& rom : roman) {
        while (number >= rom.first) {
            number -= rom.first;
            result += rom.second;
        }
        if (number > 0) {
            result += "i";
            number--;
        }
    }
    return result;
}