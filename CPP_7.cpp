#include <iostream>
#include <vector>
#include <string>

vector<string> filter_by_substring(vector<string> strings, string substring);

bool issame(auto a, auto b){
    return a == b;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto &str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Main function code, if any
    return 0;
}