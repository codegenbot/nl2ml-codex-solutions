#include <vector>
using namespace std;

// Problem description: Write a function that filters a given vector of strings to include only those that start with the provided prefix.

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;