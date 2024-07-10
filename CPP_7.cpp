```cpp
bool issame(vector<string> a,vector<string>b){
    return a == b;
}
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}
int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}