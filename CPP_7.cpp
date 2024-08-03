#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> filtered_strings;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}

int main() {
    auto result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    assert(result == vector<string>{"grunt", "prune"});
    
    return 0;
}