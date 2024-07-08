```cpp
#include <vector>
#include <string>

int main() {
    vector<string> testStrings = {"grunt", "trumpet", "prune", "gruesome"};
    vector<string> expectedResults = {"grunt", "prune"};

    bool issame(vector<string> a, vector<string> b) {
        if (a.size() != b.size()) return false;
        for (auto s : a) if (find(b.begin(),b.end(),s) == b.end()) return false;
        return true;
    }

    vector<string> filter_by_substring(vector<string> strings, string substring){
        vector<string> result;
        for(auto str : strings){
            if(str.find(substring) != string::npos)
                result.push_back(str);
        }
        return result;

    }

    assert(issame(filter_by_substring(testStrings, "run"), expectedResults));
    return 0;
}