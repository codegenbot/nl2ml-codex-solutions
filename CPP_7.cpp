#include <vector>
#include <string>
using namespace std;

bool issame(vector<string> a,vector<string> b){
    return a==b;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}