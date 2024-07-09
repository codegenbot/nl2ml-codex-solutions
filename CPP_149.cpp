bool issame(const string& a, const string& b) {
    if (a.length() != b.length()) {
        return false;
    }
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (issame(str, str)) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end());
    
    return result;
}