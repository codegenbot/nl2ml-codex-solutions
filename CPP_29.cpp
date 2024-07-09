bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(auto s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

int main() {
    vector<string> strings;
    string input;

    cout << "Enter list of strings separated by spaces: ";
    getline(cin, input);
    for (auto& s : split(input, ' ')) {
        strings.push_back(s);
    }

    string prefix;
    cout << "Enter prefix: ";
    cin >> prefix;

    vector<string> result = filter_by_prefix(strings, prefix);

    assert(issame(result, {"xxx", "xxxAAA", "xxx"}));

    return 0;
}