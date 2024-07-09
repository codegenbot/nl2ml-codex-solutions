#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <cassert>
using namespace std;

map<string, int> numMap = {
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

string sort_numbers(string numbers){
    string result = "";
    vector<string> numList;
    stringstream ss(numbers);
    string token;

    while (ss >> token) {
        numList.push_back(token);
    }

    sort(numList.begin(), numList.end(), [&](const string &a, const string &b) {
        return numMap[a] < numMap[b];
    });

    for (const string &num : numList) {
        result += num + " ";
    }

    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}