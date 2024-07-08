```cpp
#include <vector>
#include <string>

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
int main() {
    vector<string> strings;
    strings.push_back("grunt");
    strings.push_back("trumpet");
    strings.push_back("prune");
    strings.push_back("gruesome");

    assert(issame(filter_by_substring(strings, "run") ,{"grunt", "prune"}));
    return 0;
}