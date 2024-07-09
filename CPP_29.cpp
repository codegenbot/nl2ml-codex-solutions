#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;